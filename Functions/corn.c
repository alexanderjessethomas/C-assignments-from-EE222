#include <stdio.h> 
 #include <math.h> 


 double calculate(){
    int num = 64, i = 0; // num is number of chessboard squares(64)
    double sum = 0; // Initialize sum to 0

    for(i = 0; i < num; ++i){
        sum += pow(2, i);
    }
    
    return sum;
 }

int main(){
    printf("Total Number of corn Kernels are %.0f\n", calculate());
    
    return 0;
 }
