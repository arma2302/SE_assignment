#include<iostream>
using namespace std;


void calc(int a, int b)
{
cout << "Addition of two num: \n" << (a + b);
}

void calc(double a, double b)
{
	cout << endl << "Multiplication of two num: \n" << (a * b);
}

void calc(double a, int b)
{
	cout << endl << "Division of two num: \n  " << (a / b);
}

void calc(int a, double b)
{
    cout << endl << "Subtraction of two num: \n " << (a-b);
}

// Driver code
int main()
{
	calc(10, 20);
	calc(4.5, 3.5);
	calc(40, 2);
	calc(15, 30);

	return 0;
}
