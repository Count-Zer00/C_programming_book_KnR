#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

void ftoc();
void ctof();

int main()
{
    int c;

    printf("Temperature conversion \n"); 
    printf("1 - f to c\n");
    printf("2 - c to f\n");

    c = getchar();

    if (c == '1')
        ftoc();
    else if (c == '2')
        ctof();
    else printf("pick only 1 or 2");
}

void ftoc()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

void ctof()
{
    int celsius;

    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
        printf("%d\t%d\n", celsius, (9 * celsius) / 5 + 32);
}
