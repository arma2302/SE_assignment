#include<stdio.h>

int main()
{
	int number, factorial=1,i;
	printf("Enter Numner:");
	scanf("%d",&number);
	
	if(number==0)
	{
		printf("factorial of zero is zero");
		
	}
	else 
	{
		for(i=1;i<=number;i++)
		{
		 factorial=factorial*i;  
		} 
		  printf("Factorial of %d is: %d",number,factorial);    

	}
}