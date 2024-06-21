#include<stdio.h>
int main() {
	int rows=5;

	for(int i=0; i<rows; i++) { //outer lopp;

		for(int j=i; j<5; j++) { //inner loop;

			printf("%d",j+1);

		}
		printf("\n");
	}
}