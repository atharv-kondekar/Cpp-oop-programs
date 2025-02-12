#include<iostream>
using namespace std;

class A 
{	private:
	int a,b;
	
	public:
	void get()
	{	cout<<"Enter two no.s: ";
		cin>>a>>b;
		cout<<"\nSum: "<<a+b;
	}
	friend void disp(A);
	friend class Z;
};
class Z
{	public:
	void show(A obj)
	{	cout<<"\n\nA="<<obj.a<<" B="<<obj.b;
	}
};
void disp(A obj1)
{	cout<<"\na="<<obj1.a<<" b: "<<obj1.b;
}

int main()
{
	A obj;
	obj.get();
//	cout<<"\na="<<obj.a<<" b: "<<obj.b;
	disp(obj);
	Z z;
	z.show(obj);
	return 0;
}

