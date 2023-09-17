#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void rstrip(char line[]);

/* program removes whitespace characters at the end of every given line*/

int main()
{
    char line[MAXLINE];
    int len;
    
    while((len = getline(line, MAXLINE)) > 0) {
        rstrip(line);
        printf("%s", line);
    }
}

int getline(char line[], int maxline) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && i < maxline-1; ++i)
        line[i] = c;
    if (c == '\n')
        line[i] = c;
        ++i;
    line[i] = '\0';
    return i;
}

void rstrip(char line[]) {
    /* 1. znajdz znak konca, 2. sprawdzaj znaki od konca, dopoki nie znajdzie sie niebialy znak*/
    int null_sign_index = -1;
    int i = 0;

    while(line[i] != '\0')
        ++i;

    if (line[i] == '\0') 
        null_sign_index = i;
    else {
        printf("\n\nrstrip func. error - null sign at the end of line not found\n\n");
        return;
    }
    
    for(i = i-1; i > -1 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i)
        ;
    line[i+1] = '\0';
}