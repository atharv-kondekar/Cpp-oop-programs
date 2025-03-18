#include<iostream>
using namespace std;

class ComplexNumber{
	private:
		int Num1;
		int Num2;
	
	public:
		void SetInfo();
		void DisplayInfo();
		ComplexNumber();
		ComplexNumber(int ,int);
		ComplexNumber operator +(ComplexNumber &obj);
};

void ComplexNumber::SetInfo()
{
	cout<<"\n Enter the Number 1 : ";
	cin>>Num1;
	cout<<"\n Enter the Number 2 : ";
	cin>>Num2;
}

void ComplexNumber::DisplayInfo()
{
	cout<<"\n The Number 1 : "<<Num1;
	cout<<"\n The Number 2 : "<<Num2;
}

ComplexNumber::ComplexNumber()
{
	Num1=0;
	Num2=0;
}

ComplexNumber::ComplexNumber(int x,int y)
{
	Num1=x;
	Num2=y;
}

ComplexNumber ComplexNumber::operator +(ComplexNumber &obj)
{
	return ComplexNumber(Num1+obj.Num1,Num2+obj.Num2);
}

int main()
{
	ComplexNumber c1,c2;
	cout<<"\n Enter the Numbers for the C1 obj ";
	c1.SetInfo();
	
	cout<<"\n\n Enter the Numbers for the C2 Object : ";
	c2.SetInfo();
	
	cout<<"\n\n The Complex Numbers of the C1 object is : ";
	c1.DisplayInfo();
	
	cout<<"\n----------------------------------------------------------\n";
	
	cout<<"\n\n The Complex Numbers of the C2 object is : ";
	c2.DisplayInfo();
	cout<<"\n----------------------------------------------------------\n";
	
	ComplexNumber  c3;
	c3=c1+c2;
	cout<<"\n\n The Complex Numbers of the C3 object is : ";
	c3.DisplayInfo();
	
	return 0;
}
