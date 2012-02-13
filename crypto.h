#ifndef CRYPTO_H
#define CRYPTO_H

#include <cstring>
#include <algorithm>
#include <map>
#include <QDebug>
using namespace std;

typedef map<wchar_t, double> ProbabilityMap;
struct KeyChar
{
    char sym;
    int position;
};

int indexOf(wchar_t c, const wchar_t *alphabet, int m);

/**
  @param matrix 2D Array
  @param cols Number of columns in matrix
  @param rows Number of rows in matrix
  @param first,second Columns to swap
  */
void copy_column(wchar_t **src, wchar_t **dest, int rows, int first, int second);

/**
  @param matrix 2D Array
  @param cols Number of columns in matrix
  @param rows Number of rows in matrix
  @param first,second Rows to swap
  */
void copy_row(wchar_t **src, wchar_t **dest, int cols, int first, int second);

/**
  @param str Input character array
  @param key_string Output key string
  */
void copy_str_to_key(const wchar_t *str, KeyChar *key_string);
void sort_key_string(KeyChar *key_string, int size);

void encrypt(const wchar_t *input_string, wchar_t *output_string,
             const wchar_t *first_key, const wchar_t *second_key);

void decrypt(const wchar_t *input_string, wchar_t *output_string,
             const wchar_t *first_key, const wchar_t *second_key);

/**
  * Encrypts with affine Caesar algorithm
  * @param input_string Input string
  * @param alphabet Array with alphabet
  * @param a A parameter
  * @param b B parameter
  * @param m Alphabet size
  * @param output_string Output string
  */
void affine_encrypt(const wchar_t *input_string,
                    const wchar_t *alphabet, int a, int b, int m,
                    wchar_t *output_string);

/**
  * Decrypts with affine Caesar algorithm
  * @param input_string Input string
  * @param alphabet Array with alphabet
  * @param a A parameter
  * @param b B parameter
  * @param m Alphabet size
  * @param output_string Output string
  */
void affine_decrypt(const wchar_t *input_string,
                    const wchar_t *alphabet, int a, int b, int m,
                    wchar_t *output_string);

void affine_decrypt(const wchar_t *input_string,
                    const wchar_t *alphabet, int a, int b, int m,
                    wchar_t *output_string);

void analyze_decrypt(ProbabilityMap &p, const wchar_t *input_string,
                     wchar_t *output_string, wchar_t *alphabet, int m);

#endif // CRYPTO_H
