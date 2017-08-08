
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char *stringConcatenation(const char *, char *);

int main(){
	
	char *original_str;
	char *string_toAdd;
	original_str = malloc(256);
	string_toAdd = malloc(256);
	printf("Please enter the first string: ");
	gets(original_str);
	
	printf("Please enter the second string: ");
	gets(string_toAdd);
	
	printf("String after concatenation of above strings is \"%s\"\n", stringConcatenation(original_str,string_toAdd));
	system("pause");
	return 0;
}

char *stringConcatenation(const char *source, char *destination){
	char *result;
	result = (char *)malloc(sizeof(char)*(strlen(source)+strlen(destination)+1));
	if(result!=NULL){
  		strcpy(result,source);
  		strcat(result," ");

  		strcat(result,destination);
	}
return result;
}