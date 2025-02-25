#include<iostream>

using namespace std;

class A{
	public:
		string firstName;
		void setfirstName();
};

void A::setfirstName()
{
	cout<<"\n Enetr the Firstname : ";
	cin>>firstName;
}

class B{
	public:
		string lastName;
		void setLast_Name();
};

void B::setLast_Name()
{
	cout<<"\n Enetr the last Name : ";
	cin>>lastName;
}

class C:public A,public B{
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
	obj.setfirstName();
	obj.setLast_Name();
	obj.ConCate();
	
	
	return 0;
};
