//WAP to find simple interest

#include<stdio.h>
int main() {
	int SI,time,rate,p;


	printf("Enter principle balance:");
	scanf("%d",&p);

	printf("Enter time:");
	scanf("%d",&time);

	printf("Enter interest rate:");
	scanf("%d",&rate);
	
	SI= p*(1+time*rate);
	printf("simple interset for given values is %d ",SI);
}