#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getLine(char[], int);
void copyLine(char[], char[]);

/* prints longest input line */
main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copyLine(longest, line);
        }
    }
    if (max > 0) {
        printf("The longest is %d char(s)\n%s", max, longest);
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copyLine: copy 'from' into 'to'; assume to is big enough */
void copyLine(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i])!='\0') {
        ++i;
    }
}
