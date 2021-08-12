#include <stdio.h>

/*
1.5.2 character counting
using while loop
*/

main() 
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);

}
