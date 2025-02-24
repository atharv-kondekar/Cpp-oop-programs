#include<iostream>
using namespace std;

void display()
{
	static int count =0;
	count++;
	cout<<"\n Count = "<<count;
}

int main()
{
	display();
	display();
	display();
	display();
}
