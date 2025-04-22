#include<iostream>
using namespace std;

class B;

class A{
	int data;
	public:
		void set();
		friend int add(A,B);
};

void A::set()
{
	cout<<"\n Enter A : ";
	cin>>data;
}

class B{
	int val;
	public:
		void set();
		friend int add(A,B);
};

void B::set()
{
	cout<<"\n Enter B : ";
	cin>>val;
}

int add(A o1,B o2)
{
	return o1.data+o2.val;
}

int main()
{
	A a1;
	a1.set();
	B b1;
	b1.set();
	
	int sum = add(a1,b1);
	cout<<"\n the Sum = "<<sum;
	
	return 0;
}
