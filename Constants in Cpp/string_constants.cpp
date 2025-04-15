// String Constants 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name1="A";
	char name2='A';
	
	
	/*
		Difference is : 
					_____
			name1 =| A|\0|
					___
			name2= | A |
	*/
	
	cout<<"\n "<<name1;
	cout<<"\n "<<name2;
	
	return 0;
}
