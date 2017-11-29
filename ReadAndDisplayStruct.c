#include <stdio.h>

int main(){
	char fileName[]="phonedir.txt";
	struct PhoneDir{
		int num;
		char firstName[21];
		char lastName[21];
		char telphoneNum[21];
		};

	struct PhoneDir contactList[50];

	FILE *readFile=fopen(fileName,"r");

		if(readFile==NULL){
			printf("Error in appending file.");
		}
		else {
    			for(int i=0; i<strlen(readFile); i++){
								fscanf(readFile,"%ds",&contactList[i].num);
          			fscanf(readFile,"%d %s %s %s",&contactList[i].num,&contactList[i].firstName[0],&contactList[i].lastName[0],&contactList[i].telphoneNum[0]);
          			fscanf(readFile,"%s %s %s",&contactList[i].firstName[0],&contactList[i].lastName[0],&contactList[i].telphoneNum[0]);
          			printf("%s %s %s\n",contactList[i].firstName,contactList[i].lastName,contactList[i].telphoneNum);
              }
      }
	fclose(readFile);

}
