#ifndef CRYPTO_H
#define CRYPTO_H

#include <cstring>
#include <algorithm>
using namespace std;

struct KeyChar
{
    char sym;
    int position;
};


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

#endif // CRYPTO_H
