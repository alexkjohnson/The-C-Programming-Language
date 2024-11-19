#include <stdio.h>

/* print Fahrenheit-Celcius table
for fahr = 0, 20, ..., 300*/
int main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celcius);
        fahr = fahr + step;
    }
}