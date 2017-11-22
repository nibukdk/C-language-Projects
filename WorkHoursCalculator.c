#include<stdio.h>

int main()
{
	printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n\n");
	int numDays=0;

	printf("How many days:");
	scanf("%d",&numDays);

	float arrayMonth[numDays];

	float totalHours,avgLenDay=0;

	for(int i=0;i<numDays;i++){
		int day=i+1;
		printf("Enter the working hours for day %d:",day);
		scanf("%f",&arrayMonth[i]);
		totalHours=totalHours+arrayMonth[i];


	};

	avgLenDay=totalHours/numDays;
	printf("\nTotal hours worked:%.1f",totalHours);
	printf("\nAverage length of day:%.1f\n",avgLenDay);
	 printf("Hours entered: ");
	for(int i=0; i< numDays; i++){
     printf("%.1f",arrayMonth[i]);
   };


}
