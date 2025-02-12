#include<iostream>
using namespace std;

class A{
	public:
		int Num1;
		int Num2;
		void SetInfo();
};

void A::SetInfo()
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

class C:public A{
	public:
		void Sub();
};

void C::Sub()
{
	cout<<"\n ---- The Substraction : "<<Num1-Num2<<" -----\n";
}

int main()
{
	B obj;
	obj.SetInfo();
	obj.Sum();
	
	C c1;
	c1.SetInfo();
	c1.Sub();
	
	
	
	return 0;
}
