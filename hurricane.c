#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	static const char filename[] = "hurricane.txt";
    	FILE *file = fopen ( filename, "r" );

	int year[20];
	int category[20];
	char *name;
	char *name3;
	char *name4;
	char *name5;
	int i = 1;
	int year3;
	int year4;
	int year5;

	int entries; 

	fscanf(file, "%d", &entries);
	printf("The number of entries is %d \n", entries);

	
	//while (fscanf(file, "%40s %d %d", &name[i], &year[i], &category[i]) == 10){
		if(category[i] ==3){
			year3 = year[i];
			name3 = name[i];
			if(year3 > year[i]){
				year3 = year[i];
				name3 = name[i];
			}
		}
		else if(category[i] == 4){
			year4 = year[i];
			name4 = name[i];
			if(year4 > year[i]){
				year4 = year[i];
				name4 = name[i];
			}
		}
		else if(category[i] == 5){
			year5 = year[i];
			name5 = name[i];
			if(year5 > year[i]){
				year5 = year[i];
				name5 = name[i];
			}
		}
		i++;
	}

	printf("The youngest category 3 hurricane is %d \n", year3);

	printf("The youngest category 4 hurricane is %d \n", year4);

	printf("The youngest category 5 hurricane is %d \n", year5);
	
fclose(file);

return 0;
}