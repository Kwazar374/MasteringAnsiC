#include <stdio.h>

#define IN 1 // inside the word
#define OUT 0 // outside the word
#define MAX_WLEN 30 // max word's length

int main()
{
    int c;
    int wl = 0;
    int wlen[MAX_WLEN+1];
    
    for (int i = 0; i < MAX_WLEN+1; i++)
        wlen[i] = 0;

    // counting words' lengths
    int state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
                ++wlen[wl];
                wl = 0;
            state = OUT;
        }
        else
        {
            state = IN;
            ++wl;
        }
    }

    // for debuging
    /* for (int i = 0; i < MAX_WLEN+1; i++) {
        if (wlen[i] != 0) {
            printf("%d - %d\n", i, wlen[i]);
        }
    } */

    // find the biggest element in wlen array
    int biggest = -1;
    for (int i = 0; i < MAX_WLEN+1; ++i) {
        if (wlen[i] > biggest) {
            biggest = wlen[i];
        }
    }

    // draw a histogram on the screen
    int current_level = biggest;
    while (current_level > 0) {
        for (int i = 0; i < MAX_WLEN+1; ++i) {
            if (wlen[i] != 0) {
                if (wlen[i] >= current_level) {
                    printf("[] ");
                }
                else {
                    printf("   ");
                }
            }
        }
        printf("\n");
        --current_level;
    }
    for (int i = 0; i < MAX_WLEN+1; ++i) {
        if (wlen[i] != 0) {
            printf("%2d ", i);
        }
    }
}