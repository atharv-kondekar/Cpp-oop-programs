#include<iostream>
using namespace std;

class Simple{
	private:
		int a;
	public:
		void Set();
		void Display();
};

void Simple::Set()
{
	cout<<"\n Enter the Number : ";
	cin>>a;
}

void Simple::Display()
{
	cout<<"\n The Number : "<<a;
}

int main()
{
	Simple s1;
	s1.Set();
	cout<<"\n ----------  For S1 Obj  ";
	s1.Display();
	
	cout<<"\n ---------- For S2 Obj  ";
	cout<<"\n The S1 is copied in  the S2 ";
	Simple s2(s1);
	s2.Display();
	
	Simple s3,s4;
	s3.Set();
	s4=s3;
	
	s3.Display();
	s4.Display();
	
	return 0;
}
