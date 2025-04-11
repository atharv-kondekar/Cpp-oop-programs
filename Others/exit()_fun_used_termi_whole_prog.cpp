#include<iostream>
using namespace std;

class Binary{
	private:
		string Number;
		void Check();
		void Display();
		
	public:
		void Set();
		
};

void Binary::Set()
{
	cout<<"\n Enter the  Binary Number : ";
	getline(cin,Number);
	Check();
}

void Binary::Check()
{
	for(int i=0;i<Number.length();i++)
	{
		if(Number.at(i)!='0' && Number.at(i)!='1') // at() used for indexing the string and vector
		{
			cout<<"\n You Entered Invalid Binary Number";
			exit(0); //used to terminate the whole  program  without Giving Return 
		}
	}
	
	Display();
}

void Binary::Display()
{
	cout<<"\n The Binary Number : "<<Number;
}

int main()
{
	Binary n1;
	n1.Set();
	
	return 0;
}
