#include <stdio.h>

int main(){
	char fileName[]="phonedir.txt";
	FILE *appendFile=fopen(fileName,"a");
	struct PhoneDir{
		char firstName[21];
		char lastName[21];
		char telphoneNum[21];

	};
	struct PhoneDir contactList;

		printf("Enter first name:");
		scanf("%s",&contactList.firstName[0]);
		printf("Enter last name:");
		scanf("%s",&contactList.lastName[0]);
		printf("Enter telephone number:");
		scanf("%s",&contactList.telphoneNum[0]);

		if(appendFile==NULL){
			printf("Error in appending file.");
		}
		else{
			fprintf(appendFile,"%s %s %s",&contactList.firstName[0],&contactList.lastName[0],&contactList.telphoneNum[0]);

		}
		printf("Successfully saved the data.");

	fclose(appendFile);

}
