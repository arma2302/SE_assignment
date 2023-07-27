#include<stdio.h>
int main() {
    int number, firstdigit, lastdigit, sum;
    
    printf("Enter a number:");
    scanf("%d", &number);
    firstdigit = number;
    while(firstdigit >= 10)
	{
        firstdigit /= 10;
    }
    lastdigit = number % 10;
	 sum = firstdigit+lastdigit;
    printf("The sum of first and last digit is: %d\n", sum);    
}