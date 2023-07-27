
#include <stdio.h>


int sum_of_digit(int n, int val)
{
	if (n < 10) {
		val = val + n;
		return val;
	}
	return sum_of_digit(n / 10, (n % 10) + val);
}


int main()
{
	int num = 12345;

	// Function call
	int result = sum_of_digit(num, 0);
	printf("Sum of digits is %d", result);
	return 0;
}


