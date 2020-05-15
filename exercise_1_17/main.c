#include <stdio.h>

#define MAXLINE 1000 	/* maximum input line size */
#define BOUNDARY 80		/* minimum input line size */

int getLine(char[], int);
void copy(char[], char[]);

/* prints input lines that are
 * longer than 80 characters */
main()
{
	int len;			/* current line length */
	char line[MAXLINE];	/* current input line */
	while ((len=getLine(line,MAXLINE)) > 0) {
		if (len > BOUNDARY) {
			printf("count: %d\nstring: %s", len, line);
		}
	}
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar())!=EOF && c != '\n';++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
	}
	s[i+1] = '\0';
	return i;
}
