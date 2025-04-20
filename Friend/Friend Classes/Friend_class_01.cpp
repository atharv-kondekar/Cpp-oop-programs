#include<iostream>
using namespace std;

class Complex;

class Compute{
	public:
		int ComputeReal(Complex , Complex);
		int ComputeComplex(Complex,Complex);
};

class Complex{
	private:
		int a;
		int b;
	
	public:
		void set();
		void Display();
		friend class Compute;
};

void Complex::set()
{
	cout<<"\n Enter the Real Number : ";
	cin>>a;
	cout<<"\n Enter the Imaginary Number : ";
	cin>>b;
}

int Compute::ComputeReal(Complex c1, Complex c2)
{
	return (c1.a+c2.a);
}

int Compute::ComputeComplex(Complex c1,Complex c2)
{
	return (c1.b+c2.b);
}

void Complex::Display()
{
	cout<<"\n "<<a<<" + "<<b<<"i";
}

int main()
{
	int sum=0;
	Complex c1,c2;
	c1.set();
	c2.set();
	c1.Display();
	c2.Display();
	
	Compute C;
	sum=C.ComputeReal(c1,c2);
	cout<<"\n\n The Sum of the Real Number is : "<<sum;
	
	sum=C.ComputeComplex(c1,c2);
	cout<<"\n The Sum of the Imaginary Number is : "<<sum<<"i";
	
	return 0;
}
