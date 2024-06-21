#include <stdio.h>


int main(){

     int rows = 5;


     for(int i=0;i<=rows;i++){ // outer loop for Rows

        for(int j=0;j<rows;j++){ // inner loop for * pattern printing

           if(j>i){
            printf("%d",j+1);
           }else{
               printf(" ");
           }

        }

        printf("\n");
     }


    return 0;
}