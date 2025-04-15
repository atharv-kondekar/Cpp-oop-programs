// define Constants 

#include<iostream>
using namespace std;

#define pi 3.14159265 // dont use ' = ' after the variable 
#define newline '\n'

int main()
{
	float radius=2.1;
	
	float area=pi*radius*radius;
	cout<<newline<<"The Area of the Circle : "<<area;
	
	return 0;
}
