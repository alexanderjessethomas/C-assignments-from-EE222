#include <stdio.h>

#define PI 3.1415926
#define volume(r) (4/3.0)*PI*r*r*r

int main(){
    int r;
    printf("Enter radius of the sphere: ");
    scanf("%d", &r);
    printf("Volume of the sphere is %.3f", volume(r));
    return 0;
 }
