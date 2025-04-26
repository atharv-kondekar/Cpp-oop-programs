#include<iostream>
using namespace std;

class Simple{
	private:
		int *data;
	
	public:
		Simple();
		Simple(Simple & obj , bool deepcopy);
		void set();
		void display();
};

Simple::Simple()
{
	data=new int;
	*data=0;
}

Simple::Simple(Simple &obj , bool deepcopy)
{
	if(deepcopy)
	{
		data=new int(*(obj.data));
	}
	
	else
	{
		data=obj.data;
	}
}

void Simple::set()
{
	cout<<"\n Enter the data : ";
	cin>>*data;
}

void Simple::display()
{
	cout<<"\n The data : "<<*data;
}

int main()
{
	Simple s1;
	s1.set();
	cout<<"\n ----- The value for the S1 obj ";
	s1.display();
	
	bool ch;
	cout<<"\n Enter the 1 for DeepCopy & 0 for Shallow Copy : ";
	cin>>ch;
	
	Simple s2(s1,ch);
	cout<<"\n ----- The value for the S2 obj ";
	s2.display();
	
	cout<<"\n\n ---------- Now Changing the value of the s1 obj ----------  ";
	s1.set();
	
	cout<<"\n ----- The value for the S1 obj ";
	s1.display();
	
	cout<<"\n ----- The value for the S2 obj ";
	s2.display();
	
	
	return 0;
}
