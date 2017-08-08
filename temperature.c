#include <stdio.h>
int main (void)
{

	double fahr;
	int celsius;

	printf("Enter the temperature in celsius: ");
	scanf("%d", &celsius);
	fahr= (1.8 * celsius) + 32;
	printf ("The converted temperature is %lf\n", fahr);

return 0;

}