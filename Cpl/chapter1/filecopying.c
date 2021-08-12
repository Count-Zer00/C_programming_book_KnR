#include <stdio.h>

// 1.5.1 File copy

int main()
{
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}

/* 
Read a char
    while (char =/= EOF)
        output char just read
        read char
*/
