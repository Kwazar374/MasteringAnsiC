#include <stdio.h>

/* zliczanie znakow strumienia wejsciowego; pierwsza wersja*/

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}