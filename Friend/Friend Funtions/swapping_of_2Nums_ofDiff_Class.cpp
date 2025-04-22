#include<iostream>
using namespace std;

class B;

class A 
{
	private:
		int num1;
		friend void Exchange(A & o1 , B & o2);
		friend void Display(A  o1 , B o2);
	public:
		void set();
};

void A::set()
{
	cout<<"\n Enter the Num1 : ";
	cin>>num1;
}

class B{
	private:
		int num2;
		friend void Exchange(A & o1 , B & o2);
		friend void Display(A  o1 , B o2);
		
	public:
		void set();
};

void B::set()
{
	cout<<"\n Enter the Num2 : ";
	cin>>num2;
}

void Exchange(A & o1 , B & o2)
{
	int temp=o1.num1;
	o1.num1=o2.num2;
	o2.num2=temp;
}

void Display(A  o1 , B o2)
{
	cout<<"\n The Num1 : "<<o1.num1;
	cout<<"\n The Num2 : "<<o2.num2;
}

int main()
{
	A o1;
	B o2;
	o1.set();
	o2.set();
	
	cout<<"\n Before Swapping : ";
	Display(o1,o2);
	
	Exchange(o1,o2);
	
	cout<<"\n After Swapping : ";
	Display(o1,o2);
	
	return 0;
}
