#include<iostream>
using namespace std;

class Simple{
	private:
		int num1,num2;
	public:
		Simple(); // Default Constructor Intialization
		Simple(int ,int ); // Parameterised  Constructor Intialization
		void Setinfo();
		void Display();
};

Simple::Simple()
{
	cout<<"\n\n The Default Constructor is called ";
	num1=0;
	num2=0;
}

Simple::Simple(int a,int b)
{
	cout<<"\n\n The Parametrised Constructor is Called";
	num1=a;
	num2=b;
}

void Simple::Setinfo()
{
	cout<<"\n Enter the Num1 : ";
	cin>>num1;
	cout<<"\n Enter the Num2 : ";
	cin>>num2;
}

void Simple::Display()
{
	cout<<"\n The Num1 : "<<num1;
	cout<<"\n The Num2 : "<<num2;
}

int main()
{
	Simple s1;
	s1.Setinfo();
	s1.Display();
	
	Simple s2(10,20);
	s2.Display();
	
	Simple s3;
	s3.Display();
	
	return 0;
}
