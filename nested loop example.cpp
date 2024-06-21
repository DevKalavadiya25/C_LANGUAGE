#include<stdio.h>
int main() {
	int rows=6;

	for(int i=0; i<rows; i++) { //outer lopp;

		for(int j=0; j<i; j++) { //inner loop;

			printf("* ");

		}
		printf("\n");
	}
}