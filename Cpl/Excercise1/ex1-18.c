#include <stdio.h>

#define MAXLINE 1000

int ngetline(char line[], int lim);
int removetrail(char rline[]);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = ngetline(line, MAXLINE)) > 0)
        if(removetrail(line) > 0)
            printf("%s", line);
}

int ngetline(char s[], int lim)
{
    int i, c;

    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;
    
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
}

int removetrail(char s[])
{
    int i;

    for(i=0; s[i] != '\n'; ++i);
    --i;
    for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i);
    if(i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }

}
