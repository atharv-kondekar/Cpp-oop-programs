#include<iostream>
using namespace std;

const float pi = 3.141;

class Circle{
	private:
		float radius;
	
	public:
		void set();
		friend float Area(Circle c1);
		
};

void Circle::set()
{
	cout<<"\n Enter the Radius of the Circle : ";
	cin>>radius;
}

float Area(Circle c1)
{
	return pi*c1.radius*c1.radius;
}

int main()
{
	Circle obj;
	obj.set();
	
	cout<<"\n The area of the Circle is : "<<Area(obj);
	
	return 0;
}
