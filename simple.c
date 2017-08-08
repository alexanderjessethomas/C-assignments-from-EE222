#include <stdio.h>

int main()
{
	int comp;
	int i;

	printf("Please enter a number to computer the factorial: ");
	scanf("%i", &comp);
	printf("Start Counting: \n");
	for(i = 0; i <= comp; i++){
		printf("%i \n",i);
	}

return 0;
}