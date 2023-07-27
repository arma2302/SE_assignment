#include<stdio.h>
int main()
{

	

	int a,b;
	int choice;
	
	
	printf("Enter First Number: \n");
	scanf("%d",&a);
	
	printf("Enter second Number: \n");
	scanf("%d",&b);
	
		printf("select 1:sum \t 2:subtraction \t 3:multiplication \t 4:division \t 5:modulo \n");
		scanf("%d",&choice);
	
if(choice==1)
{
	printf("sum of two Numbers %d & %d is %d",a,b,a+b);
}
else if(choice==2)
{
	printf("subtraction of  two Numbers %d & %d is %d",a,b,a-b);
}
else if(choice==3)
{
	printf("multiplication of  two Numbers %d & %d is %d",a,b,a*b);
}
else if(choice==4)
{
	printf("division of  two Numbers %d & %d is %d",a,b,a/b);
}
else
{  printf("invalid");
}
}