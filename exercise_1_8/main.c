#include <stdio.h>

/* count characters in input */
main()
{
	int c, sp, tb, nl;
	
	sp = 0;
	tb = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++sp;
		}
		else if (c == '\t') {
			++tb;
		}
		else if (c == '\n') {
			++nl;
		}
	}
	printf("\n%d blanks\n%d tabs\n%d newlines\n", sp, tb, nl);
}
