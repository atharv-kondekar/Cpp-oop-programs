#include<iostream>
using namespace std;

class Complex;

class Compute{
	public:
		int sum(Complex,Complex);
};

class Complex{
	private : 
		int a;
		int b;
	
	public:
		void Set();		
		friend int Compute::sum(Complex o1,Complex o2);
};

void Complex::Set()
{
	cout<<"\n Enter the Real Number : ";
	cin>>a;
	cout<<"\n Enetr the Imaginary Number : ";
	cin>>b;
}

int Compute::sum(Complex o1,Complex o2)
{
	return(o1.a+o2.a);
}

int main()
{
	Complex c1,c2;
	c1.Set();
	c2.Set();
	
	Compute C;
	cout<<"The Sum of real part : "<<C.sum(c1,c2);

	
	return 0;
}
