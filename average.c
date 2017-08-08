#include <stdio.h>
int main(){
    int n;
    int i;
    float num[100];
    float sum= 0.0;
    float average;
    printf("Enter the size of the data set: ");
    scanf("%d",&n);
    while (n>100 || n<=0){
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
    }

   for(i=0; i<n; ++i){
      printf("%d. Enter number: ",i+1);
      scanf("%f",&num[i]);
      sum+=num[i];
   }

   average=sum/n;
   printf("Average = %.2f",average);
   //return 0;
   printf("\nThe numbers greater than average are");

   for(i=0; i<n; ++i){
	int temp;
	temp = num[i];
        if(temp>average){
		printf(" %d",temp);
	}
   }
return 0;

}
