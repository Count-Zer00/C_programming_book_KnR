#include <stdio.h>

//replace \t -> \\t, \b -> \\b, \ -> \\.
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if(c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if(c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        if(c != '\t' && c != '\b' && c != '\\') 
            putchar(c);
    }
}