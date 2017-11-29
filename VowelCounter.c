#include <stdio.h>

int main(){
	char word[16];
	int counter=0;
	char vowels[6]="aeiou";

	printf("The program calculates the number of vowels.\n");
	printf("Enter a word:");
	scanf("%s",&word[0]);
	for(int i=0; i<strlen(word);i++){
		for(int x=0; x<strlen(vowels);x++){
			char c=word[i];
			char vowelWord= vowels[x];
			if(c==vowelWord){
				counter++;

			}
			else{
			counter=counter;

			}
		}
	}

			printf("The word contains %d vowels.",counter);

}
