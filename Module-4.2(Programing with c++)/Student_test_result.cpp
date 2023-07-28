#include <iostream>
using namespace std;

class students
{
	public:
		int rollno;
		void roll()
		{

			cout<<"Enter your Roll no.: ";
			cin>>rollno;
		}
};

class test
{
	public:
		int marks1, marks2;
		void subjects()
		{
			cout<<"Enter marks of subject 1: "<<endl;
			cin>>marks1;
			cout<<"Enter marks of subject 2: "<<endl;
			cin>>marks2;
		}
		
};

class result: public students, public test
{
	public:
		void display()
		{
			int total_marks=0;
			total_marks=marks1+marks2;
			cout<<"Roll No: "<<rollno<<endl;
			cout<<"Subject-1 marks: "<<marks1<<endl<<"Subject-2 marks: "<<marks2<<endl;	
			cout<<"Total Marks: "<<total_marks<<endl;
		}
};

int main()
{
	result r;
	r.roll();
	r.subjects();
	r.display();
}


