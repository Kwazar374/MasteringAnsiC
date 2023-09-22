// source of code: https://github.com/ohkimur/the-c-programming-language-2nd-edition-solutions/blob/main/chapter_2/exercise_2_09/bitcount.c

#include <stdio.h>
#include <math.h>

void printbits(unsigned int x);
int bitcount(unsigned int x);

int main()
{
    unsigned int x = 0b1011;

    printbits(x);
    printf("x have %d bits of 1.\n", bitcount(x));

    return 0;
}

void printbits(unsigned int x) {
    unsigned int n = sizeof(unsigned int);

    printf("0b");

    int i;
    for(i = n * 8 - 1; i >= 0; --i)
    {
        (x & (unsigned int)pow(2, i)) ? putchar('1') : putchar('0');
    }

    putchar('\n');
}

int bitcount(unsigned int x)
{
    int b = 0;

    while(x)
    {
        x &= (x - 1);
        ++b;
    }

    return b;
}