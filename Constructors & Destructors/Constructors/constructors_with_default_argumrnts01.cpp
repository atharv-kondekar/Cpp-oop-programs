#include<iostream>
using namespace std;

class Simple{
	private:
		int data1;
		int data2;
		int data3;
	
	public:
		Simple(int ,int ,int );
		Simple();
		void display();
};

Simple::Simple()
{
	data1=0;
	data2=0;
	data3=0;
	
}

Simple::Simple(int a,int b=4,int c=5)
{
	data1=a;
	data2=b;
	data3=c;
}

void Simple::display()
{
	cout<<"\n Data1 : "<<data1<<" Data2 : "<<data2<<" Data3: "<<data3;
}

int main()
{
	Simple s1(10);
	s1.display();
	
	Simple s2(10,20);
	s2.display();
	
	Simple s3(10,20,30);
	s3.display();
	
	
	return 0;
}
