#include "crypto.h"

struct OccurenceComp {
  bool operator() (pair<char, double> a, pair<char, double> b)
  {
      return a.second < b.second;
  }
} occurenceLess;

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

    //Creating output string
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

int indexOf(char c, const char *alphabet, int m)
{
    for(int i = 0; i < m; i++)
    {
        if (alphabet[i] == c)
        {
            return i;
        }
    }

    return -1;
}

void affine_encrypt(const char *input_string,
                    const char *alphabet, int a, int b, int m,
                    char *output_string)
{
    int pos;
    for(int i = 0; i < strlen(input_string); i++)
    {
        if (isalpha(input_string[i]))
        {
            pos = (a*indexOf(input_string[i], alphabet, m) +b) % m;
            output_string[i] = alphabet[pos];
        }
        else
        {
            output_string[i] = input_string[i];
        }
    }

    output_string[strlen(input_string)] = '\0';
}

int gcd_extended (int a, int b, int & x, int & y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd_extended(b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int reverse_number(int a, int m)
{
    int x, y;
    int g = gcd_extended(a, m, x, y);
    x = (x % m + m) % m;
    qDebug("\nX is %d\n", x);
    return x;
}

void build_occurence_vector(ProbabilityMap &p, OccurenceVector &v)
{
    v.clear();

    for(ProbabilityMap::iterator i = p.begin(); i != p.end(); i++)
    {
        v.push_back(*i);
    }

    sort(v.begin(), v.end(), occurenceLess );
}

void build_translation_map(const OccurenceVector &first,
                           const OccurenceVector &second,
                           TranslationMap &dict)
{
    dict.clear();

    for(int i = 0; i < first.size(); i++)
    {
        dict[first.at(i).first] = second.at(i).first;
        qDebug("Translation: %c -> %c",first.at(i).first, second.at(i).first );
    }
}

void affine_decrypt(const char *input_string,
                    const char *alphabet, int a, int b, int m,
                    char *output_string)
{
    long pos;
    int index;
    int reverse;
    for(int i = 0; i < strlen(input_string); i++)
    {
        if (isalpha(input_string[i]))
        {
            index = indexOf(input_string[i], alphabet, m);
            qDebug("index is %d", index);
            reverse = abs(reverse_number(a, m));
            qDebug("reverse is %d", reverse);
            pos = (abs(index - b)*reverse) % m;
            qDebug("pos is %d", pos);
            output_string[i] = alphabet[abs(pos)];
        }
        else
        {
            output_string[i] = input_string[i];
        }

    }

    output_string[strlen(input_string)] = '\0';
}

void analyze_decrypt(ProbabilityMap &p, const char *input_string,
                     char *output_string, char *alphabet, int m)
{
    map<char, int> numChars;
    ProbabilityMap probs;

    int length = strlen(input_string);

    for(int i = 0; i < m ; i++)
    {
        numChars[alphabet[i]]  = 0;
        probs[alphabet[i]]  = 0.0;
    }

    for(int i = 0; i < strlen(input_string); i++)
    {
        if (isalpha(input_string[i]))
            numChars[input_string[i]] += 1;
    }

    for(map<char, int>::iterator i = numChars.begin();
        i != numChars.end(); i++)
    {
        probs[i->first] = (double)i->second / (double)length;
        qDebug("Probability for '%c' is %f", i->first, probs[i->first] );
    }

    TranslationMap dict;
    OccurenceVector ideal;
    OccurenceVector real;

    build_occurence_vector(p, ideal);
    build_occurence_vector(probs, real);
    build_translation_map(real, ideal, dict);

    for(int i = 0; i < length; i++)
    {
        if (isalpha(input_string[i]))
        {
            output_string[i] = dict[input_string[i]];
        } else
        {
            output_string[i] = input_string[i];
        }
    }

    output_string[length] = '\0';
}

