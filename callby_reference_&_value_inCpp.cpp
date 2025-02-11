#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}

void Swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


void SwapC_style(int *a,int *b) // Swapping with C style 
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void Swap_by_reference(int &a ,int &b) // Concept of the Reference Variable 
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int Num1,Num2;
	cout<<"\n Enter the Num1 : ";
	cin>>Num1;
	cout<<"\n Enter the Num2 : ";
	cin>>Num2;
	
	cout<<"\n The Num1 & Num2 Before Swapping ";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2<<endl;
	
	Swap(Num1,Num2); // This will don'y give you swapping 
	
	cout<<"\n The Num1 & Num2 After Calling the --- Swap() ---  Funtion";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2;
	
	cout<<"\n\n ============================================================================== \n";
	
	cout<<"\n The Num1 & Num2 Before Calling --- SwapC_style() funtion --- ";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2<<endl;
	
	SwapC_style(&Num1,&Num2); // This is the Method of the c 
	
	cout<<"\n The Num1 & Num2 After Calling the ---- SwapC_style() funtion ---- ";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2;
	
	cout<<"\n\n ============================================================================== \n";
	
	cout<<"\n The Num1 & Num2 Before Calling --- Swap_by_reference() funtion --- ";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2<<endl;
	
	Swap_by_reference(Num1,Num2); // This the Concept of the reference Variable 
	
	cout<<"\n The Num1 & Num2 After Calling the ---- Swap_by_reference() funtion ---- ";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2;
	
	
	cout<<"\n\n ==============================================================================\n";
	cout<<"\n The Sum of the Num1 & Num2 is : "<<sum(Num1,Num2);
	
	return 0;
}
