#include <stdio.h> 
#include <math.h> 


 double calculate(){
    int num = 64; // num is number of chessboard squares(64)
    int i = 0; 
    double sum = 0; // Initialize sum to 0

    for(i = 0; i < num; ++i){
        sum += pow(2, i);
    }
    
    return sum;
 }

int main(){
    
    double weight = (calculate() / 1600);
    double weight2 = (weight * 0.000453592);
    double world = 988009200;
    double difference = weight2 - world;
    printf("Total number of corn Kernels are 		 %.0f\n", calculate());
    printf("The weight in metric tons is 	 		 %.0lf",weight2);
    printf("\nThe weight of world production in metric tons is %.0lf", world);
    printf("\nThe difference is 				 %.0lf", difference);

    
    return 0;
 }
