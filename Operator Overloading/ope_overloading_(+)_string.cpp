#include<iostream>
#include<string.h>
using namespace std;

class FullName{
	private:
		string name;
	
	public:
		void set();
		FullName();
		FullName(string);
		FullName operator + (FullName obj);
		void display();
};

void FullName::set()
{
	cout<<"\n Enter the  String : ";
	cin>>name;
}

FullName::FullName()
{
	name="";
}

FullName::FullName(string name1)
{
	name=name1;
}

FullName FullName::operator +(FullName obj)
{
	FullName c4;
	c4.name=name+" "+obj.name;
	return c4.name;
}

void FullName::display()
{
	cout<<"\n The Concatcate Strings : "<<name;
}

int main()
{
	FullName f1,f2;
	f1.set();
	f2.set();
//	f2=FullName("Koik");
	
	FullName f3=f1+f2;
	f3.display();
	
	return 0;
}
