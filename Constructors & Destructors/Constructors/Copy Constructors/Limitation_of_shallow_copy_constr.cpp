#include<iostream>
using namespace std;

class Simple{
	private:
		int *data;
	
	public:
		Simple();
		void Set();
		Simple(Simple & obj);
		void Display();
};

Simple::Simple()
{
	data=new int;
	*data=0;
}

void Simple::Set()
{ 
	cout<<"\n Enter the Number : ";
	cin>>*data;
}

void Simple::Display()
{
	cout<<"\n The Number : "<<*data;
}

Simple::Simple(Simple & obj)
{
	data=obj.data;
}

int main()
{
	Simple s1;
	s1.Set();
	cout<<"\n ------ The S1 Object ";
	s1.Display();
	
	cout<<"\n ------ The s2 Object ";
	Simple s2(s1);
	cout<<"\n Copying the S1 in the S2 object ";
	s2.Display();
	
	
	cout<<"\n\n ---- Let's See What happen if we change the value of the s1 Object ------ ";
	s1.Set();
	cout<<"\n ------ The S1 Object ";
	s1.Display();
	cout<<"\n ------ The s2 Object ";
	s2.Display();
	
	cout<<"\n\n ---- Let's See What happen if we change the value of the s2 Object ------ ";
	s2.Set();
	cout<<"\n ------ The S1 Object ";
	s1.Display();
	cout<<"\n ------ The s2 Object ";
	s2.Display();
	
	return 0;
}
