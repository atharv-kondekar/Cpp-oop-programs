#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	/*
	  Pointer to  pointer 
	    -> A pointer that stores the address of another pointer 
	*/
	
	int a=3;
	int* b=&a;
	int** c=&b;
	
	cout<<"\n The Address of the a                 : "<<&a;
	cout<<"\n THe Address of the a using the b ptr : "<<b<<endl;
	
	cout<<"\n The value of the a   : "<<a;
	cout<<"\n The (value at) b     : "<<*b<<setw(12)<<" {*b}";
	cout<<"\n The address of the b : "<<&b<<" {&b}"<<endl;
	
	cout<<"\n The  c (i.e address of b)     : "<<c<<setw(5)<<"   {c} ";
	cout<<"\n The (value at) c (addr. of a) : "<<*c<<setw(5)<<"  {*c}";
	cout<<"\n The (value at (value at) C )  : "<<**c<<setw(15)<<" {**c} ";
	
	return 0;
}
