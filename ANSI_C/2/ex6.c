#include <stdio.h>

char *convert(int number, int base);
int setbits(int x, int p, int n, int y);

int main()
{
    printf("%s", convert(152, 6));
    
    return 0;
}

char *convert(int number, int base)
{
    static char res[sizeof(int)*8];

    if(base >= 10) {
        printf("Input error in 'convert' function,\nargument 'base' has to be smaller than 10.");
        return NULL;
    }
    if(number == 0)
        return "0";

    char rres[sizeof(int)*8];
    for(int i = 0; i < sizeof(int)*8; i++)
        rres[i] = 'a';

    int i = 0;
    while(number > 0) {
        rres[i++] = (number % base) + 48;
        number = number / base;
    }

    int j = 0;
    while(i >= 0) {
        if(rres[i] == 'a') {
            i--;
        }
        else {
            res[j++] = rres[i--];
        }
    }
    res[j] = '\0';

    return res;  
}

int setbits(int x, int p, int n, int y)
{
    ;
}