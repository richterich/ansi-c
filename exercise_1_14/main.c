#include <stdio.h>

#define IN 1
#define OUT 0
#define ALPHABET 26
#define MAX_FREQUENCY 10

/* print a histogram of the frequencies of different characters */
main()
{
	int c, i, j, state;
	int frequency[ALPHABET];

	for(i = 0; i < ALPHABET; ++i) {
		frequency[i] = 0;
	}

	state = OUT;
	while ((c = getchar()) != EOF) {
		if ((c >= 'A' && c <= 'Z')) {
			i = c - 65;
			state = IN;
		} else if (c >= 'a' && c <= 'z') {
			i = c - 97;
			state = IN;
		}
		if (state == IN && frequency[i] < MAX_FREQUENCY) {
			++frequency[i];
			state = OUT;
		}
	}

	for (j = MAX_FREQUENCY; j > 0; --j) {
		printf("%d\t| ", j);
		for (i = 0; i < ALPHABET; ++i) {
			if (frequency[i] > 0) {
				if ((frequency[i] - j) >= 0) {
	  				putchar('X');
				} else {
	  				putchar(' ');
				}
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
  
	printf("\t  ");
	for (i = 0; i < ALPHABET; ++i) {
		printf("-");
	}
  
	printf("\n\t  ");
	for (i = 0; i < ALPHABET; ++i) {
		putchar(i+65);
	}
  
	putchar('\n');
}
