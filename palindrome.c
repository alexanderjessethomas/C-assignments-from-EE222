#include<stdio.h>
#include<string.h>

int palindromeTester(char* a,int length);

int main(){
	char a[100];
	printf("Please enter a word to see if it's a palindrome: ");	
	while(1){
		gets(a);
		int length=strlen(a);

		if(palindromeTester(a,length)){
			printf("Yes that is a palindrome.\n");
			break;
		}else{
			printf("No that is not a palindrome.\n");
			break;
		}
	}
return 0;
}

int palindromeTester(char* a,int length){
	int i;
	for( i=0; i<length/2; i++){
		if(a[i]!=a[length-i-1]){
			return 0;
		}
	}
	return 1;
}