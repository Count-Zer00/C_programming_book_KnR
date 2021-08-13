#include <stdio.h>

#define IN  1
#define OUT 0

/*
1.5.4 Word counting
count -> lines, words, characters.
*/

main()
{
    int c, nl, nw, nc, state; 

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}