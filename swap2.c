#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int size){
	int i;
	printf("Array is: ");
	for(i = 0; i < size; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void mirror(int *arr, int fromIndex, int toIndex){
	int i;
	int temp;
	int count = 0;
	for(i = fromIndex; i < toIndex; ++i){
		if(i < toIndex - count){
			temp = arr[i];
			arr[i] = arr[toIndex - count];
			arr[toIndex - count] = temp;
			count++;
		}
	}
}

int main(){
	int size;
	int *arr;
	int i;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	arr = (int *)malloc(size * sizeof(int));
	for(i = 0; i < size; ++i){
		arr[i] = i + 1;
	}
	print(arr, size);
	
	mirror(arr, 0, (size / 2) - 1);
	printf("After First Mirroring: ");
	print(arr, size);

	mirror(arr, (size / 2), size - 1);
	printf("\nAfer Second Mirroring: ");
	print(arr, size);

	mirror(arr, 0, size - 1);
	printf("\nAfter Final Mirroring: \n");
	print(arr, size);
	printf("\n");

return 0;
}