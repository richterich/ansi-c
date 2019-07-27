#include <stdio.h>

main()
{
	int c;
	
	c = getchar() != EOF;
	
	printf("The result of the expression is %d\n", c);
}
