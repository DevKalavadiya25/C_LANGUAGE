#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	int sum;
	sum= a+b * a-b ;
	sum= a*a - b*b ;
	printf("calculate the value of  = %d\n",sum,sum);
}