#include <stdio.h>

/* zliczanie wierszy strumienia wejsciowego*/

int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}