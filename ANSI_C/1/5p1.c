#include <stdio.h>

/* kopiowanie wejscia na wyjscie; pierwsza wersja*/

int main()
{
    int c;
    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
    }
}