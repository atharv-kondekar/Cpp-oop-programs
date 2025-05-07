#include<iostream>
using namespace std;

class A{
	private:
		int num1;
	protected:
		int num2;
		int num3;
	public:
		void Set();
		void Display();
};

void A::Set()
{
	cout<<"\n Enter the Num 1 : ";
	cin>>num1;
	cout<<"\n Enetr the Num 2 : ";
	cin>>num2;
	cout<<"\n Enter the Num 3 : ";
	cin>>num3;
}

void A::Display()
{
	cout<<"\n The Num 1 : "<<num1;
	cout<<"\n The Num 2 : "<<num2;
	cout<<"\n The Num 3 : "<<num3;
}

class B : public A{
	public:
		void Reset();
};

void B::Reset()
{
	cout<<"\n Enter the Num 2 and Num 3 Again : ";
	cin>>num2>>num3;
}

int main()
{
	B obj;
	obj.Set();
	obj.Display();
	
	cout<<"\n =============================================================== \n";
	
	obj.Reset();
	obj.Display();
	return 0;
}
