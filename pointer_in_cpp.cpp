#include<iostream>
using namespace std;

int main()
{
	/*
	 	What is pointer ? 
	   		-> The data type that store the address of other datattype 	
	*/
	
	int a=3;
	int *b=&a;
	
	// '&' : (Address of) Operator 
	cout<<"\n The address of a : "<<&a;
	cout<<"\n The Address of a using the b ptr : "<<b<<endl;
	
	// '*' : (value at) | dereference operator 
	cout<<"\n The value of a : "<<a;
	cout<<"\n The (Value at) b : "<<*b;
	
	
	return 0;
}
