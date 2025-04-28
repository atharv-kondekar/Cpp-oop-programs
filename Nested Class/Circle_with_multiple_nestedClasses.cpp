#include<iostream>
using namespace std;

const float pi = 3.141;

class Circle{
	private:
	 	float radius;
	
	public:
		void SetInfo();
		float getRad();
		
		class Area{
			public:
				float ComputeArea(Circle obj);
		};
		
		class Circumference{
			public:
				float ComputeCircumFerence(Circle obj);
		};
		
		class Diameter{
			public:
				float ComputeDiameter(Circle obj);
		};
};

float Circle::getRad()
{
	return radius;
}
void Circle::SetInfo()
{
	cout<<"\n Enter the Radius : ";
	cin>>radius;
}

float Circle::Area::ComputeArea(Circle obj)
{
	return pi*obj.getRad()*obj.getRad();
}

float Circle::Circumference::ComputeCircumFerence(Circle obj)
{
	return 2*pi*obj.getRad();
}

float Circle::Diameter::ComputeDiameter(Circle obj)
{
	return 2*obj.getRad();
}

int main()
{
	Circle c1;
	c1.SetInfo();
	
	char ch;
	do
	{
		int choice;
		
		cout<<"\n ----- The Following You Can Compute About the Circle ----- ";
		cout<<"\n 1. Area of Circle ";
		cout<<"\n 2. CircumFerence of Cricle";
		cout<<"\n 3. Diameter of the Circle ";
		
		cout<<"\n\n Enter -> Your Choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				Circle::Area A1;
				cout<<"\n The Radius of the Circle : "<<c1.getRad();
				cout<<"\n The Area of the circle : "<<A1.ComputeArea(c1);
				break;
			}
			
			case 2:
			{
				Circle::Circumference cir;
				cout<<"\n The Radius of the Circle : "<<c1.getRad();
				cout<<"\n The Circumference  of the circle : "<<cir.ComputeCircumFerence(c1);
				
				break;
			}
			
			case 3:
			{
				Circle::Diameter d1;
				cout<<"\n The Radius of the Circle : "<<c1.getRad();
				cout<<"\n The Diameter of the circle : "<<d1.ComputeDiameter(c1);	
				break;
			}
			
			default:{
				cout<<"\n !!!! You Entered invalid Choice !!!!!";
				break;
			}
		}
		
		
		cout<<"\n\n Do you want to Compute Other ? (y/n) : ";
		cin>>ch;
		
	}while(ch=='y' || ch=='Y');
	
	cout<<"\n\n\n THANK YOU :) ";
	return 0;
}
