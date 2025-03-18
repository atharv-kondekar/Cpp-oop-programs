#include<iostream>
using namespace std;

class Point{
	private:
		int xc;
		int yc;
	
	public:
		void SetCoOrdinates();
		void DiplayCoOrdinates();
		Point();
		Point(int ,int );
		Point operator - ( Point & obj);
};

Point::Point(int x,int y)
{
	xc=x;
	yc=y;
}

Point Point::operator -(Point &obj)
{
	return Point(xc-obj.xc,yc-obj.yc);
}

void Point::SetCoOrdinates()
{
	cout<<"\n Enter the X co-ordinate of the Point : ";
	cin>>xc;
	cout<<"\n Enter the Y co-ordinate of the Point : ";
	cin>>yc;
}

void Point::DiplayCoOrdinates()
{
	cout<<"\n The X co-ordinate : "<<xc;
	cout<<"\n The Y co-ordinate : "<<yc;
}

Point::Point()
{
	xc=0;
	yc=0;
}

int main()
{
	Point p1,p2;
	p1.SetCoOrdinates();
	p2.SetCoOrdinates();
	cout<<"\n The Co-Ordinates of the P1 Point : ";
	p1.DiplayCoOrdinates();
	
	cout<<"\n----------------------------------------------\n";
	
	cout<<"\n The Co-Ordinates of the P2 Point : ";
	p2.DiplayCoOrdinates();
	
	cout<<"\n----------------------------------------------\n";
	
	Point p3=p2-p1;
	cout<<"\n The Co-Ordinates of the P3 Point : ";
	p3.DiplayCoOrdinates();
	
	return 0;
}
