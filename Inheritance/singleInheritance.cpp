
#include<iostream>
using namespace std;

class A {
	
	public:
		int Num1;
		int Num2;
	
	public:
		void setinfo();
};

void A::setinfo()
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

int main()
{
	B obj;
	obj.setinfo();
	obj.Sum();
	
	return 0;
}
