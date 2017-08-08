#include <stdio.h>
#include <math.h>

int main(void)
{
	float radius;
	float volume;
	float pi = 3.1415926;

	printf("Enter the radius of the sphere in centimeters: ");
	scanf("%f",&radius);

	float radiusCubed = pow( radius, 3.0);
	volume = ((4.0/3.0)* pi) * radiusCubed;
	
	float volumeInches = volume*0.0610237;
	
	printf("The volume of the sphere in cubic inches is %f.", volumeInches);
	
return 0;
}