#include<iostream>
using namespace std;

extern const int width;  // Declaration 
// Extern tells about the it exists somewhere

const int width=10; // Available for the all funstions
					// definition


int main()
{
	const int lenght=43; // Only For the Main() function 
	float area=lenght*width;
	
	cout<<"\n Area : "<<area;
	
	return 0;
}
