#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int r = rand() % 10;
    printf("%d", r);

    return 0;
}
