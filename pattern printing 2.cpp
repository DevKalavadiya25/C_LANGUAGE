#include<stdio.h>
int main()
{
	int rows=5;
	
	printf("\n\n Enter to collum * row:-");
	scanf("%d",&rows);
	for(int i=1; i<=rows; i++){
		
		for(int j=1; j<=rows; j++){
			
			if(j<i){
				printf(" ");
				
			}else{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}