/*

    <<<<<<<<------ This Program Gives the Ambiguos Constructor Error --------------->>>>>>>>>
    
    This is ambiguous because all three constructors can match this call:
    	-> simple(int a) — exact match
		-> simple(int a, int b = 3) — also matches with b=3
 		-> simple(int a, int b = 2, int c = 8) — also matches with b=2, c=8

	Solution:
		Avoid overlapping default parameters across multiple constructors. 
		Default values should only be in one constructor if you're overloading.
	
	Note:
		THe Default Constructor Don't gives the Ambiguity Error 
*/

#include<iostream>
using namespace std;

class simple{
	private:
		int data1;
		int data2;
		int data3;
	
	public:
		Simple();
		simple(int);
		simple(int ,int );
		simple(int ,int ,int );
};

Simple::Simple()
{
	data1=0;
	data2=0;
	data3=0;
	
}

simple::simple(int a)
{
	data1=a;
	data2=0;
	data3=0;
}

simple::simple(int a,int b=3)
{
	data1=a;
	data2=b;
	data3=0;
}

simple::simple(int a,int b=2,int c=8)
{
	data1=a;
	data2=b;
	data3=c;
}

int main()
{
	simple s1(10); // Gives the Ambigious Constructor Error 
	
	return 0;
}
