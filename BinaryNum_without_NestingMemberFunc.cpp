#include<iostream>
using namespace std;

class Binary{
	
	private:
		string s;
	
	public:
		void read();
		void check();
		void onesComplement();
		void display();
};

void Binary::read()
{
	cout<<"\n Enter -> the Binary Number : ";
	cin>>s;
}

void Binary::check()
{
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s.at(i) != '1' && s.at(i)!= '0')
		{
			cout<<"\n !!! Invalid binary Number !!!! ";
			exit(0);
		}
	}
}

void Binary::onesComplement()
{
	for(int i=0;i<s.length();i++)
	{
		if( s.at(i) == '1')
			s.at(i)='0';
		else
			s.at(i)='1';
	}
}

void Binary::display()
{
	cout<<"\n The Binary Number : "<<s;
}

int main()
{
	Binary b;
	
	b.read();
	b.check();
	b.display();
	b.onesComplement();
	b.display();
	
	return 0;
}
