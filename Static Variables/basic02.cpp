#include<iostream>
using namespace std;

void display()
{
	static int count =0;
	count++;
	cout<<"\n Count = "<<count;
}

void disp()
{
	
	int count=0;
	count++;
	cout<<"\n Count = "<<count;
}

int main()
{
	cout<<"\n\n----------- calling the 1st function with static ------------- \n\n";
	display();// op=1
	display();// op=2
	display();// op=3
	display();// op=4
	
	cout<<"\n\n----------- calling the 2nd function without static ------------- \n\n";
	disp();
	disp();
	disp();
	disp();
}
