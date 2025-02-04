#include<iostream>
using namespace std;

class Big{
	
	private:
		int a;
		int b;
		int Bigger(int,int);
	
	public:
		void setinfo();
		void displayinfo();
};

void Big::setinfo()
{
	cout<<"\n Enter the value of the  Num1 : ";
	cin>>a;
	cout<<"\n Enter the value of the Num2 : ";
	cin>>b;
}

void Big::displayinfo()
{
	cout<<"\n The Bigger Number : "<<Bigger(a,b);
}

int Big::Bigger(int x,int y)
{
	return (x>y)?x:y;
}

int main()
{
	Big b1;
	b1.setinfo();
	b1.displayinfo();
	
	return 0;
}
