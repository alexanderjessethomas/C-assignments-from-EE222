#include <stdio.h>

int fibNonRecusive(int num){
    int a = 0;
    int b = 1;
    int c;
    int i = 0;
    int number = num;
   while( i < num){
      if ( i <= 1 ){
         c = i;
      }
      else{
         c = a + b;
         a = b;
         b = c;
      }
printf(" %d\n", c);
	i++;
    }
  
    return c;
 }


int fibRecursive(int num){
    int number = num;
    if(number == 0){
        return 0;
    }
    if(number == 1){
       return 1;
    }
    int result = fibRecursive(number - 1) + fibRecursive(number - 2);
    return result;
}


int main(){
    int num;
    int i;
    printf("Enter a number : ");
    scanf(" %d",&num);
	 printf(" %d\n", num);
   
   printf("Fibonacci Series using non recursion:\n");

       printf(" %d",fibNonRecusive(num));
   
   
   printf("\nFibonacci Series using recursion:\n");
    for(i=1;i<num;i++){
       printf("%i",fibRecursive(i));
    }
   
    return 0;
}



