#include <stdio.h>

float fahr2celsius(float);

#define START 0
#define LIMIT 300
#define STEP 20

/* print Fahrenheit-Celsius table */
main()
{
	float fahr;

	printf("Fahrenheit\tCelsius\n");
	printf("----------\t-------\n");
	
	for (fahr = START; fahr <= LIMIT; fahr = fahr + STEP)
		printf("%3.0f\t\t%3.2f\n", fahr, fahr2celsius(fahr));

	return 0;
}

float fahr2celsius(float fahr)
{ 
	return 5 * (fahr-32) / 9;
}
