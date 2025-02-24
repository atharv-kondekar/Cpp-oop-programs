
#include<iostream>
using namespace std;

class A{
	public:
		int Num1;
		void set();
};

void A::set()
{
	cout<<"\n Enter the Num1 : ";
	cin>>Num1;
}

class B{
	public:
		int Num2;
		void SetB();
};

void B::SetB()
{
	cout<<"\n Enter the Num2 : ";
	cin>>Num2;
}

class C:public A,public B{
	public :
		void Sum();
		void Sub();
};

void C::Sub()
{
	cout<<"\n ---- The Substraction : "<<Num1-Num2<<" -----\n";
}

void C::Sum()
{
	cout<<"\n ---- The Sum : "<<Num1+Num2<<" -----\n";
}


int main()
{
	C obj;
	obj.set();
	obj.SetB();
	obj.Sum();
	obj.Sub();
	
	return 0;
}
