#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getLine(char[], int);
int trimEnd(char[], int);

/* removes trailing blanks and tabs
 * from each line of input */
main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len=getLine(line, MAXLINE)) > 0) {
        if ((len=trimEnd(line, len)) > 0) {
            printf("chars: %d\ntrimed line: %s", len, line);
        }
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;
    for(i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* trimEnd: remove trailing blanks and tabs from s, return length */
int trimEnd(char s[], int len)
{
    int c, i;
    for (i=len-1; i >= 0 && ((c=s[i])=='\t' || c==' ' || c=='\n' || c=='\0'); --i) {
        s[i] = '\0';
    }
    if (i >= 0 && i<len-1) {
        ++i;
        s[i] = '\n';
    }
    return i;
}
