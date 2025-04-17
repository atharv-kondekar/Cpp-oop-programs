#include<iostream>
using namespace std;

class Complex{
	private:
		int a;
		int b;
		
		
	public:
		void Set();
		void Sum(Complex o[], int  );
		void Display();
};

void Complex::Set()
{
	cout<<"\n Enter the Real Number  : ";
	cin>>a;
	cout<<"\n Enter the Imaginary NUmber : ";
	cin>>b;
}

void Complex::Sum(Complex o[],int n)
{
	a=0;
	b=0;
	
	for(int i=0;i<n;i++)
	{
		a=a+o[i].a;
		b=b+o[i].b;
	}
}

void Complex::Display()
{
	cout<<"\n "<<a<<" + "<<" "<<b<<"i";
}

int main()
{
	int n;
	cout<<"\n Enter the How Many Number you want to store : ";
	cin>>n;
	
	Complex Num[n];
	
	for(int i=0;i<=n;i++)
	{
		if(i==n)
		{
			Num[i].Sum(Num,n);
			break;
		}
		
		Num[i].Set();
	
		cout<<"\n-----------------------------------------------\n";
	}
	
	cout<<"\n The complex Numbers : \n\n";
	for(int i=0;i<=n;i++)
	{
		if(i==n)
		{
			cout<<"\n -------- The Sum of All Complex Numbers ----------- \n\t\t\t";
			Num[i].Display();
			break;
		}
		
		Num[i].Display();
	}
	
	
	return 0;
}
