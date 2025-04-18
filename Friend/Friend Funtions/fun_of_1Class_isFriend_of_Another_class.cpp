#include<iostream>
using namespace std;

class student;


class Print{
	public:
		void PrintDetails(student s1);
};

class student{
	private:
		int marks;
	
	public:
		void Setmarks();
		friend void Print::PrintDetails(student s1);
};



void student::Setmarks()
{
	cout<<"\n Enter the marks of the Student : ";
	cin>>marks;
}


void Print::PrintDetails(student s1)
{
	cout<<"\n The marks of the Student is : "<<s1.marks;
}



int main()
{
	student obj;
	obj.Setmarks();
	
	Print p1;
	p1.PrintDetails(obj);
	return 0;
}
