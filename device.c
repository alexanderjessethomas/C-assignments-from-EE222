#include <stdio.h>

int main()
{
	int status;
	
	printf("Please enter the status code for the device: ");
	scanf("%i", &status);	

	if (status == 0){
		printf("The device is currently off");
	}
	else if (status == 1){
		printf("The device is overheating, don't use this device in Arizona.");
	}
	else if (status == 2){
		printf("The device is about to explode, take shelter!");
	}
	else{
		printf("We are fine.");
	}

return 0;	
}