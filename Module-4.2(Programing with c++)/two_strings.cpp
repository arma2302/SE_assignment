
#include <iostream>
#include <string.h>

using namespace std;


class AddString {

public:
	// Classes object of string
	char s1[25], s2[25];

	// Parameterized Constructor
	AddString(char str1[], char str2[])
	{
		// Initialize the string to class object
		strcpy(this->s1, str1);
		strcpy(this->s2, str2);
	}


	void operator+()
	{
		cout << "\nConcatenation: " << strcat(s1, s2);
	}
};

// Driver Code
int main()
{
	// Declaring two strings
	char str1[] = "hello";
	char str2[] = "its arma";

	// Declaring and initializing the class
	// with above two strings
	AddString a1(str1, str2);

	// Call operator function
	+a1;
	return 0;
}
