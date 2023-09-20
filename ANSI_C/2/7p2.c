#include <stdio.h>
#define MAXLINE 1000

int lower(int c);
int getline(char *line, int lim);

int main()
{
    /* char characters[] = {'a', 'A', 'b', 'B', 'c', 'C'};
    int length = sizeof(characters) / sizeof(characters[0]);
    for(int i = 0; i < length; ++i)
        characters[i] = lower(characters[i]);

    for(int i = 0; i < length; ++i)
        printf("%c", characters[i]); */
    char line[MAXLINE];
    printf("string to lower: ");
    int length = getline(line, MAXLINE);
    for(int i = 0; i < length; ++i)
        line[i] = lower(line[i]);
    
    printf("final string: %s", line);
    
    return 0;
}

int lower(int c) {
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int getline(char *line, int lim) {
    int c, i;
    for(i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        line[i] = c;
    if(c == '\n') {
        line[i] = c;
        ++i;
    }
    if(c == EOF) {
        line[i] = '\0';
    }
    return i;
}