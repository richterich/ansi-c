#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getLine(char[], int);
void reverse(char[], int);

/* prints reverse line 
 * from each line of input */
main()
{
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line */
    while ((len = getLine(line,MAXLINE)) > 0) {
        reverse(line, len);
        printf("%s", line);
    }
    return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
    int c, i;
    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse the character string s */
void reverse(char s[], int len)
{
    int i, end;
    if (s[len-1] == '\n')
        --len;
    for(i = 0; i < len/2; ++i) {
        end = len - (i+1);
        s[end] += s[i];
        s[i] = s[end] - s[i];
        s[end] -= s[i];
    }
}
