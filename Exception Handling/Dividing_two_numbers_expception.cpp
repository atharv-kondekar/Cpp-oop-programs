#include<iostream>
using namespace std;

float division(float num1,float num2)
{
	try{
		if(num2==0)
			throw (num2);
		if(num2<0)
			throw (num2);
	}
	
	catch(float n)
	{
		if(n==0)
		{
			cout<<"\n Can't divide by Zero";
		}
		
		else
		{
			cout<<"\n The Denominator must be positive";
		}
		
		return -1;
	}
	
	return num1/num2;
}

int main()
{
	float num1;
	float num2;
	
	cout<<"\n Enter the Numrator : ";
	cin>>num1;
	cout<<"\n Enter the Denominator : ";
	cin>>num2;
	
	float  result = division(num1,num2);
	
	if(result!=-1)
	{
		cout<<"\n The Division : "<<result;
	}
	
	return 0;
}
