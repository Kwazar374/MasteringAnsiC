#include <stdio.h>

/* drukowanie tabeli przeliczeniowej stopni Fahrenheita na stopnie Celcjusza*/
/* dla wartości fahr = 0, 20, ..., 300; wersja zmiennoprzecinkowa */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}