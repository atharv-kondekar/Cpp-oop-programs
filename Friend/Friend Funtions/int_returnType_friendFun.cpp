#include<iostream>
using namespace std;

class Box{
	private:
		int lenght;
	
	public:
		void set();
		friend int GetLenght(Box b1);
};

void Box::set()
{
	cout<<"\n Enter the Lenght of the Box : ";
	cin>>lenght;
}

int GetLenght(Box b1)
{
	return b1.lenght;
}

int main()
{
	Box obj;
	obj.set();
	
	cout<<"\n The Lenght of the Box is : "<<GetLenght(obj);
	
	return 0;
}
