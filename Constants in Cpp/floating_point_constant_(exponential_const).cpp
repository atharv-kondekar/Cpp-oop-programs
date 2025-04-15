// Floating Point Constant 

#include<iostream>
using namespace std;

int main()
{
	float a=56.78;
	float b=.56;
	
	// Exponential Constant 
	/*
		syntax = Me+-num
		M= Mantisa ( Main Number )
		e/E  = 10 raise to power 
		+-=it can be positive or negative 
		num= times the number 
	*/
	float exponential = 0.23455e+3; //  0.23455e+3 = 0.23455 * 10^3
									//   => 234.55 
									
	float negative_expo=1234e-3;
	
	cout<<"\n a = "<<a;
	cout<<"\n b= "<<b;
	cout<<"\n Exponential = "<<exponential;
	cout<<"\n Negative exponential = "<<negative_expo;
	
	return 0;
}
