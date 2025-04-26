#include<iostream>
using namespace std;

class Simple{
	private:
		int *data;
	
	public:
		Simple();
		void Set();
		void Display();
		~Simple();
};

Simple::Simple()
{
	data=new int;
	*data=0;
}

void Simple::Set()
{
	cout<<"\n Enetr the data : ";
	cin>>*data;
}

void Simple::Display()
{
	cout<<"\n The Data : "<<*data;
}

Simple::~Simple()
{
	delete data;
	cout<<"\n\n The Memory is Released Successfully";
}

int main()
{

	Simple s1;
	s1.Set();
	s1.Display();
	
	// The Destructor is called by constructor automatically 
	// It not called by Explicitly
	
	
	return 0;
}
