#include<iostream>
using namespace std;

int & return_by_Reference(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return a;
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
	
	return_by_Reference(Num1,Num2) = 766;
	
	cout<<"\n The Num1 & Num2 After Calling the --- return_by_Reference() ---  Funtion";
	cout<<"\n The Num1 : "<<Num1<<" The Num2 : "<<Num2;
	
	return 0;
}
