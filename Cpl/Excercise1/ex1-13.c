#include <stdio.h>

//histogram i.e hello->*****
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        }
        else putchar('*');
    }
}
