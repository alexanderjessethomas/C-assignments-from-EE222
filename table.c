#include <stdio.h>
#define Pi 3.1415926

int main()
{
	float degs;
	float rads;
	
	for(degs = 0; degs <= 360; degs+=10){
		rads = degs * (Pi/180);
		printf("Degrees: %f	Radians: %f. \n", degs,rads);
	}	

	
return 0;
}