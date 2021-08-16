#include<stdio.h>
//show number of blanks, tabs and spaces.
int main() 
{
    int c, nl, nt, nb;
    nl = nt = nb = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++nb;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\t", nb, nt, nl);
}
