#include <stdio.h>

//1.2 variable and arithmetic expressions

main()
{
    int fahr, celsius, kelvin;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32)/9;
        kelvin = celsius + 273;
        printf("%d\t%d\t%d\n", fahr, celsius, kelvin);
        fahr = fahr + step;
    }
}
