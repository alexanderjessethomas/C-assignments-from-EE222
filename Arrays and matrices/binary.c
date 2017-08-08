#include<stdio.h>
int binarysearch(int array[],int n,int target){
int low = 0;
int high = n-1;
int mid;
while(low <= high){
    mid = (low+high)/2;
   if(array[mid] == target) return mid;
   else if(array[mid] < target)
   low = mid+1;
   else
   high = mid-1;
}
   return -1;
}

int main(int argc, char* argv[])
{
int array[] ={ 1,3,4,7,9,10,12,15,18,20};
int target;
int index;
printf("Enter value to be searched :");
scanf("%d",&target);
index = binarysearch(array, 10, target);
if(index<0)
printf("\n%d not found in array ",target);
else
printf("\n%d found at index %d in array ",target,index);
return 0;
}