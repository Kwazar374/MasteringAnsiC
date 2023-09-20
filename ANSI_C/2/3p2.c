#include <stdio.h>

enum week {MON, TUE, WED, THU, FRI, SAT, SUN};

int main()
{
    enum week today;
    today = WED;
    printf("Tommorow is %d day of the week", today+1);

    return 0;
}