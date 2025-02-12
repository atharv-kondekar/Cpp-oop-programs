#include<iostream>
using namespace std;

class A{
	public:
		int Num1;
		int Num2;
		void Set();
};

void A::Set()
{
	cout<<"\n Enter the Num1 : ";
	cin>>Num1;
	cout<<"\n Enter the Num2 : ";
	cin>>Num2;
}

class B:public A{
	public:
		void Sum();
};

void B::Sum()
{
	cout<<"\n ---- The Sum : "<<Num1+Num2<<" -----\n";
}

class C:public B{
	public:
		void sub();
};

void C::sub()
{
	cout<<"\n ---- The Substraction : "<<Num1-Num2<<" -----\n";
}

int main()
{
	C obj;
	obj.Set();
	obj.Sum();
	obj.sub();
	
	return 0;
}
