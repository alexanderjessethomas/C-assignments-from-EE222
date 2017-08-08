#include <stdio.h>

int main()
{
	float k;
	float m;

	printf("Enter the number of miles to convert: ");
	scanf("%f",&m);
	
	k = m*1.60934;
	
	printf("%f miles is equal to %f kilometers", m,k);
	
return 0;
}