#include <stdio.h> 
	int main(){
		char firstName[16], lastName[21],fileName[13];
		
		printf("The program saves your first and last name into a file.\n");
		printf("Enter your first name:");
		scanf("%s",&firstName[0]);
		printf("Enter your last name:");
		scanf("%s",&lastName[0]);
		printf("File where you want to save your name:");
		scanf("%s",&fileName[0]);
		//printf("The file name is %s",fileName);
		
		FILE *writeFile= fopen(fileName,"w");
		if(writeFile==NULL){
			printf("Error in opeing your file Name");
			return 0;
		}
		else{
			fprintf(writeFile,"%s %s\n",&firstName,&lastName);
			fclose(writeFile);
			printf("\nSuccessfully saved the data!");
		}
		
	}
			
