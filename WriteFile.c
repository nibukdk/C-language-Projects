#include <stdio.h> 
       int main()
      {  
        FILE *opening = fopen("hello.usr", "w"); 
		   if(opening==NULL){
		   		printf("There was an error opeing the file.");
			   exit(1);
		   }
		   else{
			   fprintf(opening, "Hello world!\n"); 
			   printf("Writing to the file was successful.\nClosing the program.\n");
		   }
          
         fclose(opening);
       return 0;
  }
