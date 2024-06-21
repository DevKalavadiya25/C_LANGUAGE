#include<stdio.h>

int main(){

     for(int i=1;i<=5;i++){ // outer loop for Rows

        for(int j=1;j<=9;j++){ // inner loop for * pattern printing

           if(j>=6-i && j<=4+i){
            printf("*");
           }else{
           	
               printf(" ");
           }

        }

        printf("\n");
     }


    return 0;
}