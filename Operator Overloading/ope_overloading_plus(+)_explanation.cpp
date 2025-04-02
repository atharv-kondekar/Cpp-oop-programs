#include<iostream>
using namespace std;

class complex
{
	private:
		int real;
		int img;
	
	public:
		complex();
		complex(int,int);
		complex operator + (complex obj);
		void set();
		void display();
};

void complex::set()
{
	cout<<"\n Enter the Real Number : ";
	cin>>real;
	cout<<"\n Enter the Imaginary Number : ";
	cin>>img;
}
complex::complex()
{
	real=0;
	img=0;
}


complex::complex(int r,int i)
{
	real=r;
	img=i;
}

complex complex::operator +(complex obj)
{
	complex c5;
	c5.real=real+obj.real;
	c5.img=img+obj.img;
	
	return c5;
}

void complex::display()
{
	cout<<"\n "<<real<<" + "<<" "<<img<<"i";
}

int main()
{
	complex c1;
	c1.set();
	complex c2(5,4);
	
	cout<<"\n The complex number of the C1 object : ";
	c1.display();
	
	cout<<"\n The complex number of the C2 object : ";
	c2.display();
	
	complex c3=c1+c2; // the c1 obj calls the operator overloaing funtion bz "c1+" asa aahe
	cout<<"\n The complex number of the C3(C1+C2) object : ";
	c3.display();
	
	return 0;
}

