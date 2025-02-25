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
	cout<<"\n Enter the Frist Name : ";
	cin>>firstName;
	cout<<"\n Enter the Last Name : ";
	cin>>lastName;
}

class B:public A{
	public:
		void concate();
};

void B::concate()
{
	firstName=firstName+lastName;
	cout<<"\n The Full Name : "<<firstName;
}

int main()
{
	B obj;
	obj.set();
	obj.concate();
	
	return 0;
}
