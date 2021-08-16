#include <stdio.h>

//value of (c=getchar()) != EOF is 1 or 0
int main() {
    int c;
    int value;

    value = ((c = getchar()) != EOF);
    printf("%i\n", value);
    return 0;
}
