#include <stdio.h>
#define MAXLINE 1000 /* dopuszczalny rozmiar wiersza danych wejsciowych*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* wypisywanie najdluzego wiersza danych wejsciowych*/

int main()
{
    int len; /* dlugosc biezacego wiersza*/
    int max; /* najwieksza znana dlugosc*/
    char line[MAXLINE]; /* biezacy wiersz wejscia*/
    char longest[MAXLINE]; /* najdluzszy wiersz*/

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /*dane zawieraly co najmniej jeden wiersz*/
        printf("%s", longest);
    return 0;
}

/* getline: pobiera wiersz do tablicy s, zwraca dlugosc*/
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: kopiuje 'from' do 'to' zaklada wystarczajacy rozmiar*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}