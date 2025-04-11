#include<iostream>
using namespace std;

class PhoneNumber
{
	private:
		long long int Number;
		void Display();
		
	public:
		void Set();
		
};

void PhoneNumber::Set()
{
	cout<<"\n Enter the Phone Number : ";
	cin>>Number;
	
	if(Number<1000000000 || Number >9999999999)
	{
		cout<<"\n Enter the Valid Number ";
		exit(0);
	}
	
	Display();
}

void PhoneNumber::Display()
{
	cout<<""<<Number;
}

int main()
{
	PhoneNumber n1;
	n1.Set();

	return 0;
}
