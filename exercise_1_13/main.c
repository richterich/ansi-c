#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORDS 10
#define WORDS_LENGTH 16

/* print a histogram of the lengths of words */
main()
{
	int c, i, j, wc, state;
	int words[MAX_WORDS];

	for (i = 0; i < MAX_WORDS; ++i) {
		words[i] = 0;
	}

	wc = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN;
			++wc;
		}
		if (state == IN) {
			if (words[wc-1] < WORDS_LENGTH && wc <= MAX_WORDS) {
				++words[wc-1];
			}
		}
	}

	printf("Count of words %d\n", wc);
	printf("Maximum %d character(s) per word\n", WORDS_LENGTH);
	printf("Only for %d word(s) histograms will be printed\n", MAX_WORDS);

	printf("A horizontal histogram\n");
	for (i = 0; i < MAX_WORDS; ++i) {
		if (words[i] > 0) {
			for (j = 0; j < words[i]; ++j) {
				putchar('X');
			}
			putchar('\n');
		}
	}

	printf("A vertical histogram\n");
	for (j = WORDS_LENGTH; j > 0; --j) {
		for (i = 0; i < MAX_WORDS; ++i) {
			if (words[i] > 0) {
				if ((words[i] - j) >= 0) {
					putchar('X');
				} else {
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
