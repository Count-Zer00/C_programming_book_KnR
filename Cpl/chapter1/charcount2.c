#include <stdio.h>

/*
1.5.2 character counting
using for loop
*/

main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}
