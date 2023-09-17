#include <stdio.h>

/* zliczanie znakow strumienia wesjciowego; druga wersja*/

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%0.f\n", nc);
}