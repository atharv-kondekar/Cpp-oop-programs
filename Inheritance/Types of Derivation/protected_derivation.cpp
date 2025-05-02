#include<iostream>
using namespace std;

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


class B : protected A{
	private:
		int num4;
	public:
		void Set();
		void Display();
};

void B::Set()
{
	cout<<"\n\n Calling the Setinfo() funtion of class A  from the Derived Class B \n\n";
	Setinfo();
	
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
	/*
	  ---- Gives Error -----
	  Because it becomes protected to class B 
	  and by object of B it can't be accessible 
	  
		obj.Setinfo();     
		obj.Displayinfo();
	*/

	obj.Set();
	obj.Display();
	
	/*
		We can call it from only Class A object
		A.Setinfo();
		A.Displayinfo();
	*/
	return 0;
}
