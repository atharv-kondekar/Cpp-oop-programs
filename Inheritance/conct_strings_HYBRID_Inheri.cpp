#include<iostream>
using namespace std;

class A{
	public:
		string fn;
		string ln;
};

class B:virtual public A{
	public:
		void Setfn();
};

void B::Setfn()
{
	cout<<"\n Enter the First Name : ";
	cin>>fn;
}

class C:virtual public A{
	public:
		void Setln();
};

void C::Setln()
{
	cout<<"\n Enter the Last name : ";
	cin>>ln;
}

class D:public B,public C{
	public:
		void concate();
};

void D::concate()
{
	fn=fn+ln;
	cout<<"\n The Full name : "<<fn;
	
}

int main()
{
	D obj;
	obj.Setfn();
	obj.Setln();
	obj.concate();
	
	return 0;
}
