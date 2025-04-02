#include<iostream>
using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	
	public:
		Date();
		Date(int d,int m,int y);
		friend void operator>>(istream &in,Date & obj);
		friend void operator<<(ostream &out,Date & obj);
};

Date::Date()
{
	day=0;
	month=0;
	year=0;
}

Date::Date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}

void operator>>(istream &in,Date & obj)
{
	cout<<"\n Enter the Day : ";
	in>>obj.day;
	cout<<"\n Enter the Month : ";
	in>>obj.month;
	cout<<"\n Enter the Year : ";
	in>>obj.year;
}

void operator<<(ostream &out,Date & obj)
{
	cout<<"\n THe Full Date : ";
	out<<obj.day<<" / "<<obj.month<<" / "<<obj.year;
}

int main()
{
	Date d1;
	cin>>d1;
	cout<<d1;
	
	return 0;
}
