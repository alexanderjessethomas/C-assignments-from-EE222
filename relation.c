#include <stdio.h>

int main(void){
	int *ptr = 20;
	int a = 10; 
	
	ptr = &a;

	printf("The value of ptr is %i, the address of ptr is %p, the value of what ptr is pointing to %i", ptr, &ptr, *ptr);
return 0;
}