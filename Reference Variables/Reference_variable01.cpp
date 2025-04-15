#include<iostream>
using namespace std;

int main()
{
	int Num1=100;
	int &ref=Num1;
	// syntax
	//     Dataype &ReferneceName = variableName;
	
	cout<<"\n Num1 = "<<Num1;
	cout<<"\n It's Reference = "<<ref;
		
	return 0;
}
