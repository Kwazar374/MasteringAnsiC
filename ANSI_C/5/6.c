#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char *lineptr[MAXLINES];

/* int *test[10];
int tab[] = {2, 3, 4};
int a = 1;
int *tabp = &a;
test[0] = tabp; */

int c = 2;
int d = 3;
int arr[] = {1, 2, 3};
int *b[] = {arr, &d};
int a = 5;
int *p = &a;

int main()
{
    b[0] = p;
    printf("%d", *b[0]);
    return 0;
}