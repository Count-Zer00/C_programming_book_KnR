#include <stdio.h>

int main()
{
    int celsius, fahr, kelvin;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("fahr  celsius  kelvin\n");
    printf("---------------------\n");

    celsius = lower;
    while(celsius <= upper) {
        fahr = (celsius * 9/5) + 32;
        kelvin = celsius + 273;
        printf("%d\t%d\t%d\n", celsius, fahr, kelvin);
        celsius = celsius + step;
    }
}