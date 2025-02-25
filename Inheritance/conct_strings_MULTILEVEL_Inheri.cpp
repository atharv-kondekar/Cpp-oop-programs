#include<iostream>

using namespace std;

class A{
	public:
		string firstName;
		string lastName;
};

class B:public A{
	public:
		void set();
};

void B::set()
{
	cout<<"\n Enter the first name : ";
	cin>>firstName;
	cout<<"\n Enetr the last Name : ";
	cin>>lastName;
}

class C:public B{
	public:
		void ConCate();
};

void C::ConCate()
{
	firstName=firstName+lastName;
	cout<<"\n The Fullname: "<<firstName;
}

int main()
{
	C obj;
	obj.set();
	obj.ConCate();
	
	
	return 0;
};
