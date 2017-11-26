#include <stdio.h> 
       int main()
      {  
         int num1,num2,num3,num4;
         FILE *opening=fopen("numbers.s","r");
         if(opening==NULL){
            printf("Reading the file returned error");
            return 0;
         }
         else{
            fscanf(opening,"%d %d %d %d",&num1,&num2,&num3,&num4);
            fclose(opening);
         }
         printf("Numbers found in the file numbers.s:\n%d, %d, %d and %d",num1,num2,num3,num4);
         int sum=num1+num2+num3+num4;
         printf("\nSum of the numbers: %d",sum);
  }
