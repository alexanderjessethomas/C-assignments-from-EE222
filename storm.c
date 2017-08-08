#include <stdio.h>
#include <stdlib.h>
#define FILENAME "hurricane.txt"


typedef struct hurricane{
	char name[15];
	int year;
	int category;
}hurricane;


int main(void){
	FILE *file;
	file= fopen(FILENAME, "r");

	hurricane hd;
	hurricane *hurricaneData;
	hurricane *current;
	int i = 0;
	int j = 0;
	int lines;
	int category3 = 0;
	int category4 =0;
	int category5 = 0;

	hurricaneData = (hurricane*)calloc(12, sizeof(hurricane));
	current = (hurricane*)calloc(3, sizeof(hurricane));


	fscanf(file, "%d", &lines);

	for(j=1; j<=lines; j++){
		fscanf(file, "%s %d %d", hd.name, &hd.year, &hd.category);
		*(hurricaneData+(j-1)) = hd;
	}
	
	fclose(file);



	for(i =0; i < lines; i++){
		if(((hurricaneData+i)->category) == 3){
				if(((hurricaneData+i)->year) > category3){
					category3 = ((hurricaneData+i)->year);
				}
		}

		if(((hurricaneData+i)->category) == 4){
			if(((hurricaneData+i)->year) > category4){
				category4 = ((hurricaneData+i)->year);
			}
		}

		if(((hurricaneData+i)->category) == 5){
			if((hurricaneData+i)->year > category5){
				category5 = ((hurricaneData+i)->year);
			}
		}
	}

	printf("\nThe youngest storms for category 3, 4 and 5 hurricanes: \n");


	for(i=0; i<lines;i++){
		if((category3 == ((hurricaneData+i)->year)) || category4 == (hurricaneData+i)->year || category5 == (hurricaneData+i)->year){
			printf("The youngest category %d hurricane is hurricane %s which occured in %d \n", (hurricaneData+i)->category, (hurricaneData+i)->name, (hurricaneData+i)->year);
		}
	}


	return 0;
}