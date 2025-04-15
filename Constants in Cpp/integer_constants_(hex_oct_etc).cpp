// Integer constants 

#include<iostream>
using namespace std;

int main()
{
	int a=20;
	int hexNum = 0x1A;  // 0x1A = 26 in decimal
	//  Hexadecimal Constant:
	/*
		Uses base 16.
		Digits: 0-9 and A-F (or a-f)
		Prefix: 0x or 0X
	 Example:
		int hexNum = 0x1A;  // 0x1A = 26 in decimal
	*/
	
	int octNum = 025;  // 025 = 2×8 + 5 = 21 in decimal
	
	// octal constant 
	/*
		Uses base 8.
		Digits: 0-7
		Prefix: 0 (zero)

	 Example:
		int octNum = 025;  // 025 = 2×8 + 5 = 21 in decimal
	*/
	
	
	cout<<a<<endl;
	cout<<hexNum<<endl;
	cout<<octNum<<endl;
	
	/*
	op:
		
	*/
	
	return 0;
}
