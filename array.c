
#include<stdio.h>

int main(){

	int i;
	int arr[1];

	for (i=0;i<54;i++){
       		arr[i] = i;
   	}

	for (i=0;i<54;i++){
		printf("value of arr[%d] is %d \n", i, arr[i]);
	}

return 0;

}
//Conclusion: There is no Array bound check in C language. In c since there is no array bound check you can go over the array boundries by 54 indecies 
