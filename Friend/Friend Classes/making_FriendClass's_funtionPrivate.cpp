#include<iostream>
using namespace std;

class Complex;

class Compute{
	private:
		int ComputeReal(Complex , Complex );
		int ComputeImaginary(Complex,Complex);
	public:
		void ComputeSum(Complex , Complex ,int *,int *);
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

void Complex::Display()
{
	cout<<"\n "<<a<<" + "<<b<<"i";
}

void Compute::ComputeSum(Complex o1,Complex o2,int *real,int *imaginary)
{
	*real=ComputeReal(o1,o2);
	*imaginary=ComputeImaginary(o1,o2);
}

int Compute::ComputeReal(Complex o1,Complex o2)
{
	return (o1.a+o2.a);
}

int Compute::ComputeImaginary(Complex o1,Complex o2)
{
	return(o1.b+o2.b);
}

int main()
{	
	Complex c1,c2;
	c1.set();
	c2.set();
	
	c1.Display();
	c2.Display();
	
	Compute C;
	int real=0,imaginary=0;
	C.ComputeSum(c1,c2,&real,&imaginary);
	
	cout<<"\n-----------------";
	cout<<"\n "<<real<<" + "<<imaginary<<"i";
	
	return 0;
}
