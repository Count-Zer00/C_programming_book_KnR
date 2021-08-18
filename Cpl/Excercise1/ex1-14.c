#include <stdio.h>
#define TOTAL 128

int main()
{
    int c, i, j;
    int _char[TOTAL];

    for(i=0; i<TOTAL; ++i)
        _char[i] = 0;

    while((c=getchar()) != EOF) 
    {
        _char[c] = _char[c] + 1;
    }
    for(i=0; i<TOTAL; ++i)
    {
        putchar(i);
        for(j=0; j<_char[i]; ++j)
            putchar('*');
        putchar('\n');
    }
}
//help from learntosolveit.com