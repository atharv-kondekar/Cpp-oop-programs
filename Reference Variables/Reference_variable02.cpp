#include<iostream>
using namespace std;

int main()
{
	int Num=100;
	int &ref=Num;
	cout<<"\n ---- Initially \n\t Num= "<<Num;
	cout<<"\n\t It's Reference = "<<ref<<endl;
	
	Num=20;
	cout<<"\n --- Changing the Num = 20 ";
	cout<<"\n\t Num = "<<Num;
	cout<<"\n\t It's Reference  = "<<ref<<endl;
	
	ref=90;
	cout<<"\n --- Changing the Reference  = 90 ";
	cout<<"\n\t Num = "<<Num;
	cout<<"\n\t It's Reference  = "<<ref<<endl;
	
	
	return 0;
}
