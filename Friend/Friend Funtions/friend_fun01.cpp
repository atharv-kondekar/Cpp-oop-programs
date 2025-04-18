#include<iostream>
using namespace std;

class Complex{
	private:
		int a;
		int b;
	
	public:
		void set();
		void display();
		friend Complex sum(Complex o1,Complex o2);
};
void Complex::set()
{
	cout<<"\n Enter the Real number : ";
	cin>>a;
	cout<<"\n Enter Imaginary number : ";
	cin>>b;
	
}

void Complex::display()
{
	cout<<"\n "<<a<<" + "<<" "<<b<<"i";
}

Complex sum(Complex o1,Complex o2)
{
	Complex o3;
	o3.a=o1.a+o2.a;
	o3.b=o1.b+o2.b;
	return o3;
}

int main()
{
	Complex c1,c2,sum1;
	c1.set();
	c2.set();
	
	sum1=sum(c1,c2);
	sum1.display();
	
	
	return 0;
}
