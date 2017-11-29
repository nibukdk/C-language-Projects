    #include <stdio.h> 
     int main()
    {  
       FILE *readFile1=fopen("mata.txt","r");
       FILE *readFile2=fopen("matb.txt","r");
       FILE *writeFile;

       int matrix1[10][10],matrix2[10][10];
       int x,y;

       //Reading given one file and then another
       if(readFile1==NULL){
         printf("There was an error while reading files");
         return 0;
       }
       else{
         for(x=0;x<10;x++){
            for(y=0;y<10;y++){
            fscanf(readFile1,"%d",&matrix1[x][y]);
            }
         }

       }
       fclose(readFile1);

      /*//Print Matrix 1
          for(x=0;x<10;x++){
              for(y=0;y<10;y++){
              if(y==9){
                printf("%d\n",matrix1[x][y]);
              }
              else{
                printf("%d ",matrix1[x][y]);
              }

              }
        }*/


        if(readFile2==NULL){
         printf("There was an error while reading files");
         return 0;
       }
       else{
         for(x=0;x<10;x++){
            for(y=0;y<10;y++){
            fscanf(readFile2,"%d",&matrix2[x][y]);
            }
         }

       }
       fclose(readFile2);

      /*		//Print Matrix 2
         for(x=0;x<10;x++){
            for(y=0;y<10;y++){
            if(y==9){
              printf("%d\n",matrix2[x][y]);
            }
            else{
              printf("%d ",matrix2[x][y]);
            }

            }


         }

       */

       //Creating sum of two matrices into sumMatrix
       int sumMatrix[10][10];
           for(x=0;x<10;x++){
            for(y=0;y<10;y++){

              sumMatrix[x][y]=matrix1[x][y]+matrix2[x][y];

            }
         }

       //Creating new file sum.usr and saving sumMatrix in it.
       if((writeFile=fopen("sum.usr","w"))==NULL){
          printf("File creation failed");
       }else{
          for(x=0;x<10;x++){
          for(y=0;y<10;y++){
            if(y==9){
              fprintf(writeFile,"%d\n",sumMatrix[x][y]);
            }
            else{
              fprintf(writeFile,"%d ",sumMatrix[x][y]);
            }
          }
        }
         fclose(writeFile);
       }

       //Print The Sum Matrix
      /*
       for(x=0;x<10;x++){
            for(y=0;y<10;y++){
            if(y==9){
              printf("%d\n",sumMatrix[x][y]);
            }
            else{
              printf("%d ",sumMatrix[x][y]);
            }

            }
         }*/

       printf("The sum of the matrices has been calculated into the file sum.usr.\n");
}
