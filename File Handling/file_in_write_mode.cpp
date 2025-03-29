#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("WriteModeFile.txt",ios::out); // Opening in  the Write mode
	
	if(myfile.is_open())
	{
		char ch;
		string input;
		do
		{
			cout<<"\n Enter the Data in your file : ";
			getline(cin,input);
			
			myfile<<input<<endl;
			
			cout<<"\n\n\t "<<input<<endl;
			
			cout<<"\n Do you want to exit (y/n) : ";
			cin>>ch;
			cin.ignore();
			
		}while(ch!='y' && ch!='Y');
		
		myfile.close();
	}
	
	else
	{
		cout<<"\n Unable to open file ";
		return 1;
	}
	
	return 0;
}
