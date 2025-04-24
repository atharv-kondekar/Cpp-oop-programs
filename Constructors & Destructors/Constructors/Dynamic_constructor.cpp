#include<iostream>
#include<string>

using namespace std;

class Name{
	private:
		string name;
	public:
		Name(string);
		void Display();
};

Name::Name(string MyName)
{
	name=MyName;
}

void Name::Display()
{
	cout<<"\n The Name "<<name;
}

int main()
{
	string nm;
	cout<<"\n Enter the Name : ";
	getline(cin,nm);
	
	Name n1(nm);
	n1.Display();
	return 0;
}
