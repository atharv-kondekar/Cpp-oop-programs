#include<iostream>
using namespace std;

class Binary{
	
	private:
		string s;
		void check();
		void onesComplement();
		void display();
	
	public:
		void read();
};

void Binary::read()
{
	cout<<"\n Enter -> The Binary Number : ";
	cin>>s;
	
	check();
}

void Binary::check()
{
	for(int i=0;i<s.length();i++)
	{
		if( s.at(i) != '0' && s.at(i)!='1')
		{
			cout<<"\n !!! Invalid Binary Number !!!";
			exit(0);  // Used to terminate the whole program 
		}
	}
	
	display();
	
	char ch;
	cout<<"\n\n Do You want the One's Complement of the Binary Number (y/n) : ";
	cin>>ch;
	
	if(ch=='y' || ch=='Y')
	{
		cout<<"\n The one's Complement \n";
		onesComplement();
	}
}

void Binary::onesComplement()
{
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i) == '0')
			s.at(i)='1';
		else
			s.at(i)='0';
	}
	
	display();
}

void Binary::display()
{
	cout<<"\n The Binary Number : "<<s;
}

int main()
{
	Binary b;
	b.read();
	
	return 0;
}
