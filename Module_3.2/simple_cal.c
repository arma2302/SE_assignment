#include<stdio.h>
int sum()
{
	int a,b;
	printf("Enter first Number:\n");
	scanf("%d",&a);
	printf("Enter second Number:\n");
	scanf("%d",&b);
	
	
    printf("Sum of two Numbers: is %d \n",a+b);
}
int subtraction()
{
	int a,b;
	printf("Enter first Number:\n");
	scanf("%d",&a);
	printf("Enter second Number:\n");
	scanf("%d",&b);
	
	
    printf("Subtraction of two Numbers: is %d \n",a-b);
}
int multiplication()
{
	int a,b;
	printf("Enter first Number:\n");
	scanf("%d",&a);
	printf("Enter second Number:\n");
	scanf("%d",&b);
	
	
    printf("Multiplication of two Numbers: is %d \n",a*b);
}
int division()
{
	int a,b;
	printf("Enter first Number:\n");
	scanf("%d",&a);
	printf("Enter second Number:\n");
	scanf("%d",&b);
	
	
    printf("division of two Numbers: is %d \n",a/b);
}
    


int main()
{  int choice;


printf("select: 1:sum \t 2:subtraction \t 3:multiplication \t 4:division \n");
scanf("%d",&choice);
if (choice==1)
{
	sum(); 
}
else if(choice==2)
{
	subtraction(); 
	
	}
	else if(choice==3)
	{
		
	multiplication();
	} 
	else if (choice==4)
	{
	division();
		
	}
	
	else
	{
		printf("invalid");
	}
	
}