#include <stdio.h>

/*Remove extra spaces to single space*/
/*communist         manifesto*/
/*to -> communist manifesto*/
int main()
{
    int c;
    while((c = getchar()) != EOF) 
    {
        if (c == ' ') 
        {
            while((c = getchar()) == ' ');
            putchar(' ');
            if(c == EOF)
                break;
        }
        putchar(c);
    }
}

//got help from stackoverflow.