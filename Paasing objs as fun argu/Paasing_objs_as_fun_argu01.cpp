#include<iostream>
using namespace std;

class Complex{
	private:
		int a;
		int b;
	
	public:
		void set();
		void sum(Complex o1,Complex o2);
		void display();
};

void Complex::set()
{
	cout<<"\n Enter the Real Number : ";
	cin>>a;
	cout<<"\n Enter the Imaginary Number : ";
	cin>>b;
}

void Complex::sum(Complex o1,Complex o2)
{
	a=o1.a+o2.a;
	b=o1.b+o2.b;
}

void Complex::display()
{
	cout<<"\n "<<a<<"+ "<<b<<"i";
}

int main()
{
	Complex c1,c2,c3;
	
	c1.set();
	c2.set();
	
	cout<<"\n The Complex Numbers : \n";
	c1.display();
	c2.display();
	cout<<"\n-------------------------";
	c3.sum(c1,c2);
	c3.display();
	
	
	return 0;
}
