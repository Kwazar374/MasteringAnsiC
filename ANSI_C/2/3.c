#include <stdio.h>
#include <string.h>

int new_strlen(char s[])
{
    int i;

    i = 0;
    while(s[i] != '\0')
        ++i;
    return i;
}

int main()
{
    char *str = "12345678";
    printf("strlen length: %d\n", strlen(str));
    printf("new_strlen length: %d", new_strlen(str));
    return 0;
}