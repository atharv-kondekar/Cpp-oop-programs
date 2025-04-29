#include<iostream>
using namespace std;

int main()
{
	enum Months{
		january=1 , february , march ,april ,may ,june,
		july,auguest,september,october,november,december
	};
	
	Months m1 = january ;
	cout<<m1;
	
	return 0;
}
