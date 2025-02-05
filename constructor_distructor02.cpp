#include<iostream>
using namespace std;

class circle{
	
	private:
		float radius;
		float area;
		float circum;
		
	public:
		circle();
		circle(int x);
		circle(circle & obj);
		~circle();
};

circle::circle()
{
	cout<<"\n\n **** You are in the Default Constructor "<<endl;
	cout<<"\n Enter the radius of the Circle : ";
	cin>>radius;
	area=3.141*radius*radius;
	circum=2*3.141*radius;
	
	cout<<"\n The Area of the circle   : "<<area;
	cout<<"\n The Circumference pf the circle : "<<circum;
}

circle::circle(int x)
{
	cout<<"\n\n ****You are in the Parametrised Constructor "<<endl;
	radius=x;
	area=3.141*radius*radius;
	circum=2*3.141*radius;
	
	cout<<"\n The Area of the circle   : "<<area;
	cout<<"\n The Circumference pf the circle : "<<circum;
}

circle::circle(circle &obj)
{
	cout<<"\n\n ******You are in the Copy Constructor "<<endl;
	radius=obj.radius;
	area=3.141*radius*radius;
	circum=2*3.141*radius;
	
	cout<<"\n The Area of the circle  : "<<area;
	cout<<"\n The Circumference pf the circle : "<<circum;
}

circle::~circle()
{
	cout<<"\n\n You are in the Distructor "<<endl;
}

int main()
{
	{circle c1;}
	{circle c2(10.2);}
	{circle c3(c1);}
	cout<<"\n\n---- MAIN OVER ----\n";
	return 0;
}
