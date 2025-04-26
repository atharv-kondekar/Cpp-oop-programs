#include<iostream>
using namespace std;

class simple{
	private:
		int data;
	
	public:
		simple();
		simple(int a);
		simple(int a,int b);
		void Display();
};

simple::simple()
{
	data=0;
}

simple::simple(int a)
{
	data=a;
}

simple::simple(int a,int b)
{
	data=a+b;
}

void simple::Display()
{
	cout<<"\n The Data : "<<data;
}

int main()
{
	simple s1,s2(10),s3(10,20);
	s1.Display();

	s2.Display();
	

	s3.Display();
	
	
	return 0;
}
