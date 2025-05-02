#include<iostream>
using namespace std;

/*
class B : public A // Using the "public" access specifier 

public of Base class : Becomes the public of the derived class 
protected of Base Class : Becomes the protected of the Derived Class  
	and only acessible in the derived class 

In All Case :
Private of the base class remains private in the base class and not acessible 
by the Members  Funstions of the derived class 
*/

class A{
	private:
		int num1;
		int num2;
	
	protected:
		int num3;
		
	public:
		void Setinfo();
		void Displayinfo();
};

void A::Setinfo()
{
	cout<<"\n Enter the Num1 : ";
	cin>>num1;
	cout<<"\n Enetr the Num2 : ";
	cin>>num2;
}

void A::Displayinfo()
{
	cout<<"\n The Num1 : "<<num1;
	cout<<"\n The Num2 : "<<num2;
}

class B : public A // Using the "public" access specifier 
{
	private:
		int num4;
	public:
		void Set();
		void Display();
};

void B::Set()
{
	cout<<"\n  acessing the protetced elemnt 'Num3' in the Base Class \n";
	cout<<"\n Enter the Num 3: ";
	cin>>num3;
	cout<<"\n Enter the Num 4 : ";
	cin>>num4;
}

void B::Display()
{
	cout<<"\n\n Calling the Funtions of base Class in the Derived Class : \n\n";
	Displayinfo();

	cout<<"\n The Num 3 : "<<num3; // acessing the protetced elemnt in the Base Class 
	cout<<"\n The Num 4 : "<<num4;
}

int main()
{
	B obj;
	obj.Setinfo();  // Calling the Base Class Public Funtion 
	obj.Set();      // Calling the Derived Class Public Funtion 
	
	cout<<"\n\n Calling the Funtions of base Class in Main Function by Derived class Obj \n\n";
	obj.Displayinfo(); // Calling the Base Class Public Funtion 
	obj.Display();    // Calling the Derived Class Public Funtion 
	
	return 0;
}
