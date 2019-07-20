#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 300, 280, ..., 0; floating-point version */
main()
{
	int fahr;

	printf("Fahr\tCelsius\n");
	printf("----\t-------\n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
	}
}
