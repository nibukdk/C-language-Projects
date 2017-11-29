#include <stdio.h>

	int main(){
		int n1;
		int n2;
		int n3;

		int largest(int num1,int num2,int num3);
		int smallest(int num1,int num2,int num3);




	printf("Enter the 1. number:");
	scanf("%d",&n1);

	printf("Enter the 2. number:");
	scanf("%d",&n2);

	printf("Enter the 3. number:");
	scanf("%d",&n3);

		int large=largest(n1,n2,n3);
		int small=smallest(n1,n2,n3);



	printf("Among the numbers you entered, \n");
	printf("the largest was %d and the smallest was %d.",large,small);


return 0;

	}
int largest(int num1,int num2,int num3){
		 int larger;
			if(num1<num2 && num3<num2){
				larger=num2;
			}
			else if(num2<num1 && num3<num1){
				larger=num1;
			}
			else{
			larger=num3;}
			return larger;
		}
		int smallest(int num1,int num2,int num3){
		 int smaller;
			if(num1<num2 && num1<num3){
				smaller=num1;
			}
			else if(num2<num1 && num2<num3){
				smaller=num2;
			}
			else{
			smaller=num3;}
			return smaller;
		}
