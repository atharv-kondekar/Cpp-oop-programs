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

class B: virtual public A{
	public:
		int Sum;
		void Add();
};

void B::Add()
{
	Sum=Num1+Num2;
}

class C:virtual public A{
	public:
		int sub;
		void Substraction();
};

void C::Substraction()
{
	sub=Num1-Num2;
}

class D:public B,public C{
	public:
		void Display();
};

void D::Display()
{
	cout<<"\n ---- The Sum : "<<Sum<<" -----\n";
	cout<<"\n ---- The Substraction : "<<sub<<" -----\n";
}

int main()
{
	D obj;
	obj.SetInfo();
	obj.Add();
	obj.Substraction();
	obj.Display();
	return 0;
}
