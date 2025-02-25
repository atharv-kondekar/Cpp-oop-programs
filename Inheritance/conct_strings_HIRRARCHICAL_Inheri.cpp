#include<iostream>
using namespace std;

class A{
	public:
		string firstName;
		string lastName;
		void set();
};

void A::set()
{
	cout<<"\n Enter the first name : ";
	cin>>firstName;
	cout<<"\n Enetr the last Name : ";
	cin>>lastName;
}

class B:public A{
	public:
		void Display();
};

void B::Display()
{
	firstName=firstName+lastName;
	cout<<"\n The Fullname: "<<firstName<<endl;
}

class C:public A{
	public:
		void Disp();
};

void C::Disp()
{
	firstName=lastName+firstName;
	cout<<"\n The Fullname: "<<firstName<<endl;
}

int main()
{
	B b1;
	b1.set();
	b1.Display();
	
	C c1;
	c1.set();
	c1.Disp();
	
	
	return 0;
}
