#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("SumitFile.txt",ios::in); //Opening in the reading Mode
	
	if(myfile.is_open())
	{
		string line;
		char ch;
		cout<<"\n ---------------- Contents in the File -------------------- \n";
		/*
				// It Shows the line by line data in the file 
		do
		{
			
			getline(myfile,line);
			cout<<"\n"<<line;
			
			cout<<"\n Do you want to exit (y/n) : ";
			cin>>ch;
			cin.ignore();
			
		}while(ch!='y' && ch!='Y');
		*/
		
		// Gices in the all data at a time 
		while(getline(myfile,line))
		{
			cout<<"\n"<<line;
		}
		
		myfile.close();
	}
	
	else
	{
		cout<<"\n Unable to open file ";
		return 1;
	}
	
	return 0;
}
