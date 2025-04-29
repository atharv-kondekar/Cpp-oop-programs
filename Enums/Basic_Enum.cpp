#include<iostream>
using namespace std;

int main()
{
	/*
	enum Months{
		january=0, february , march ,april ,may ,june,
		july,auguest,september,october,november,december
	};


	cout<<"\n january : "<<january;
	cout<<"\n december : "<<december;
	*/
	
	enum Months{
		january=1, february , march ,april ,may ,june,
		july,auguest,september,october,november,december
	};


	cout<<"\n january : "<<january; // 1
	cout<<"\n december : "<<december; // 12
	return 0;
}
