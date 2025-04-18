#include<iostream>
using namespace std;

#define line"---------------------------------------";

class Complex;
class Compute{
	public:
		Complex Sum(Complex ,Complex); // Declaring the funtion 
};

class Complex{
	private:
		int a;
		int b;
	
	public:
		void Set();
		void Display();
		friend Complex Compute::Sum(Complex o1,Complex o2); //  making the friend 
};

void Complex::Set()
{
	cout<<"\n Enter the Real Number : ";
	cin>>a;
	cout<<"\n Enetr the Imaginary Number : ";
	cin>>b;
}

void Complex::Display()
{
	cout<<"\n "<<a<<" + "<<b<<"i";
}
// Definition of the Compute Class Sum() funtion 
Complex Compute::Sum(Complex o1,Complex o2)
{
	Complex o3;
	o3.a=o1.a+o2.a;
	o3.b=o1.b+o2.b;
	return o3;
}

int main()
{
	Complex c1,c2,sum;
	c1.Set();
	c2.Set();
	
	Compute C;
	sum=C.Sum(c1,c2);
	
	c1.Display();
	c2.Display();
	cout<<"\n"<<line;
	sum.Display();
	
	return 0;
}
