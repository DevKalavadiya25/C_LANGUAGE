#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	int sum;
	sum= a*a + 2*a*b + b*b;
	printf("calculate the value of  = %d\n",sum);
}