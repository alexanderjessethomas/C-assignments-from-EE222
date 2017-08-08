#include <stdio.h>
int strLength(char*c){
	int count = 0;
	while (*c != '\0'){
		count++;
		c++;
	}
	return count;
}

int main(){

	char string[50];
	int length;

	printf("Please enter a string: ");
	gets(string);
	
	length = strLength(string);
	printf("The length of the given string: %s is : %d", string, length);
	return 0;
	

}