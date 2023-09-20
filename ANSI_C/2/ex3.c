#include <stdio.h>

int htoi(char line[]);
char lower(char c);
int atoi(char c);
int power(int base, int exp);

int main()
{
    printf("%d", htoi("0xFF"));

    return 0;
}

// htoi - conversion from hex to dec
// blueprint:
// reach end of the input string
//      go back untill x is met or the string ends
//      while going back, multiply the digits by the powers of 16
// return decimal number as int

int htoi(char line[])
{
    int i, digit, base = 1, res = 0;
    char c = line[0];
    for(i = 0; (c=line[i]) != '\0'; ++i)
        ;
    --i;
    for(int j = 0; i >= 0 && (c=line[i]) != 'x' && c != 'X'; --i, ++j) {
        if(lower(c) <= 'f' && lower(c) >= 'a')
            digit = 10 + lower(c) - 'a';
        else
            digit = atoi(c);
        res = base * digit + res;
        base = power(16, j+1);
    }
    return res;
}

// check whether the char is big letter
// if yes, make it lowercase

char lower(char c) {
    int res;
    if(c <= 'Z' && c >= 'A')
        res = c + 'a' - 'A';

    return res;
}

int atoi(char c) {
    if(c <= '9' && c >= '0')
        return c -'0';
    else
        return 1000;
}

int power(int base, int exp){
    int res = 1, k;
    for(int i = 0; i < exp; ++i) {
        res = res * base;
    }
    return res;
}


