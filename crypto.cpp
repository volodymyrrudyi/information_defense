#include "crypto.h"

void copy_column(wchar_t **src, wchar_t **dest, int rows, int first, int second)
{
    for(int i = 0; i < rows; i++)
    {
        dest[second][i] = src[first][i];
    }
}

void copy_row(wchar_t **src, wchar_t **dest, int cols, int first, int second)
{
    for(int i = 0; i < cols; i++)
    {
        dest[i][second] = src[i][first];
    }
}

void copy_str_to_key(const wchar_t *str, KeyChar *key_string)
{
    for(int i = 0; i < wcslen(str); i++)
    {
        key_string[i].sym = str[i];
        key_string[i].position = i;
    }
}

void sort_key_string(KeyChar *key_string, int size)
{
    bool changed = false;

    do
    {
        changed = false;
        for(int i = 0; i < size - 1; i++)
        {
            if (key_string[i].sym > key_string[i+1].sym)
            {
                swap(key_string[i].sym, key_string[i+1].sym);
                swap(key_string[i].position, key_string[i+1].position);
                changed = true;
            }
        }
    }
    while(changed);
}

void encrypt(const wchar_t *input_string, wchar_t *output_string,
             const wchar_t *first_key, const wchar_t *second_key)
{
    // Computing length
    int first_len = wcslen(first_key);
    int second_len = wcslen(second_key);
    int input_len = wcslen(input_string);

    // Allocating memory for keys
    KeyChar *firstKey = new KeyChar[first_len];
    KeyChar *secondKey = new KeyChar[second_len];

    // First key construction
    copy_str_to_key(first_key, firstKey);
    // Second key construction
    copy_str_to_key(second_key, secondKey);

    // First key sorting
    sort_key_string(firstKey, first_len);
    // Second key sorting
    sort_key_string(secondKey, second_len);

    // Matrix with source message
    wchar_t **matrix_source = new wchar_t*[first_len];
    // Matrix with mixed columns
    wchar_t **matrix_cols = new wchar_t*[first_len];
    // Matrix with mixed rows
    wchar_t **matrix_rows = new wchar_t*[first_len];

    // Allocating memory for matricies
    for(int i = 0; i < first_len; i++)
    {
        matrix_source[i] = new wchar_t[second_len];
        matrix_cols[i] = new wchar_t[second_len];
        matrix_rows[i] = new wchar_t[second_len];
    }

    int cur = 0;
    // Filling matrix with source message
    for(int j = 0; j < second_len; j++)
    {
        for(int i = 0; i < first_len; i++)
        {
            matrix_source[i][j] = input_string[cur];
            cur++;
        }
    }

    // Mixing columns
    for(int i = 0; i < first_len; i++)
    {
        copy_column(matrix_source, matrix_cols, second_len,
                    firstKey[i].position, i);
    }

    // Mixing rows
    for(int i = 0; i < second_len; i++)
    {
        copy_row(matrix_cols, matrix_rows, first_len,
                    secondKey[i].position, i);
    }


    cur = 0;
    for(int j = 0; j < second_len; j++)
    {
        for(int i = 0; i < first_len; i++)
        {
            if (cur == input_len)
                continue;
            output_string[cur] = matrix_rows[i][j];
            cur++;
        }
    }

    output_string[input_len] = 0;

    for(int i = 0; i < first_len; i++)
    {
        delete []matrix_source[i];
        delete []matrix_cols[i];
        delete []matrix_rows[i];
    }


    delete []matrix_source;
    delete []matrix_cols;
    delete []matrix_rows;
    delete [] firstKey;
    delete [] secondKey;
}

void decrypt(const wchar_t *input_string, wchar_t *output_string,
             const wchar_t *first_key, const wchar_t *second_key)
{
    // Calculating sizes
    int first_len = wcslen(first_key);
    int second_len = wcslen(second_key);
    int input_len = wcslen(input_string);

    // Memory allocation for keys
    KeyChar *firstKey = new KeyChar[first_len];
    KeyChar *secondKey = new KeyChar[second_len];

    // First key construction
    copy_str_to_key(first_key, firstKey);
    // Second key construction
    copy_str_to_key(second_key, secondKey);

    // First key sorting
    sort_key_string(firstKey, first_len);
    // Second key sorting
    sort_key_string(secondKey, second_len);

    // Matrix with source message
    wchar_t **matrix_source = new wchar_t*[first_len];
    // Matrix with shuffled columns
    wchar_t **matrix_cols = new wchar_t*[first_len];
    // Matrix with shuffled rows
    wchar_t **matrix_rows = new wchar_t*[first_len];

    // Allocating memory for matrices
    for(int i = 0; i < first_len; i++)
    {
        matrix_source[i] = new wchar_t[second_len];
        matrix_cols[i] = new wchar_t[second_len];
        matrix_rows[i] = new wchar_t[second_len];
    }

    int cur = 0;
    // Fill matrix with source message
    for(int j = 0; j < second_len; j++)
    {
        for(int i = 0; i < first_len; i++)
        {
            matrix_rows[i][j] = input_string[cur];
            cur++;
        }
    }

    // Moving rows
    for(int i = 0; i < second_len; i++)
    {
        copy_row(matrix_rows, matrix_cols, first_len,
                    i, secondKey[i].position);
    }

    // Moving columns
    for(int i = 0; i < first_len; i++)
    {
        copy_column(matrix_cols, matrix_source, second_len,
                    i, firstKey[i].position);
    }


    cur = 0;
    for(int j = 0; j < second_len; j++)
    {
        for(int i = 0; i < first_len; i++)
        {
            if (cur == input_len)
                continue;
            output_string[cur] = matrix_source[i][j];
            cur++;
        }
    }

    output_string[input_len] = 0;

    for(int i = 0; i < first_len; i++)
    {
        delete []matrix_source[i];
        delete []matrix_cols[i];
        delete []matrix_rows[i];
    }


    delete []matrix_source;
    delete []matrix_cols;
    delete []matrix_rows;
    delete [] firstKey;
    delete [] secondKey;
}
