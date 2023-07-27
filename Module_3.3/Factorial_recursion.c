//Factorial using recursion
#include<stdio.h>
int factorial(int a)
{
	if(a>1)
	{
	return a*factorial(a-1);
	}
}
main()
{
	int number;
	printf("Enter your Number :");
	scanf("%d",&number);
	printf("%d",factorial(number));
}n