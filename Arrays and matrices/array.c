
#include<stdio.h>

int main()

{

int i;

int arr[5];

   for (i=0;i<100;i++){

       arr[i] = i+1000;

   }

for (i=0;i<100;i++)

{

printf("value of arr[%d] is %d \n", i, arr[i]);

}

}

//Able to change the value of all the elements that are there beyond the array. There is no issue accessing the elements beyond the array limit.

//Conclusion: There is no Array bound check in C language.
