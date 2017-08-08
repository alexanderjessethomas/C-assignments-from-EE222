#include <stdio.h>

#define Pi 3.1415926
#define circumference(rad) 2*Pi*rad
#define RUNS 5

int main(){
    float rad;
    int i;
    for(i = 1; i <= RUNS; i++){
        printf("Enter the value of radius: ");
        scanf("%f", &rad);
        printf("The radius: %.2f, The circumference: %f\n", rad, circumference(rad));
    }
 }
