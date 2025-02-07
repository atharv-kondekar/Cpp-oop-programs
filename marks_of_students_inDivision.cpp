#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Branch{
	
	private:
		string name;
		string year;
		string PRN[100];
		char div;
		int n;
		int marks[100];
		void displayInfo();
	
	public:
		void setInfo();
		
};

void Branch::setInfo()
{
	cout<<"\n Enter-> The Branch Name :";
	getline(cin,name);
	
	cout<<"\n Enter -> Year of the division : ";
	getline(cin,year);
		
	cout<<"\n Enter -> The Division of the Class : ";
	cin.get(div);
	
	cout<<"\n Enter -> The total number of students in the "<<div<<" Division : ";
	cin>>n;
	
	if(n>70)
	{
		n=70;
		cout<<"\n !!!! The Only 70 students are allowed in a division !!!! ";
	}

	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"\n Enter -> The PRN of the "<<i+1<<"st student : ";
			cin>>PRN[i];
			cout<<"\n Enter -> The marks of the "<<i+1<<"st student : ";
			cin>>marks[i];
		}
		
		else
		if(i==1)
		{
			cout<<"\n Enter -> The PRN of the "<<i+1<<"nd student : ";
			cin>>PRN[i];
			cout<<"\n Enter -> The marks of the "<<i+1<<"nd student : ";
			cin>>marks[i];
		}
		
		else
		if(i==2)
		{
			cout<<"\n Enter -> The PRN of the "<<i+1<<"rd student : ";
			cin>>PRN[i];
			cout<<"\n Enter -> The marks of the "<<i+1<<"rd student : ";
			cin>>marks[i];
		}
		
		else
		{
			cout<<"\n Enter -> The PRN of the "<<i+1<<"th student : ";
			cin>>PRN[i];			
			cout<<"\n Enter -> The marks of the "<<i+1<<"th student : ";
			cin>>marks[i];
		}
	}
	
	displayInfo();
}

void Branch::displayInfo()
{
	cout<<"\n ************* The Branch : "<<name<<" ****************"<<endl;
	cout<<"\n ---> The Year for the Division is : "<<year;
	cout<<"\n ---> The Diviosn of the "<<year<<" is : "<<div;
	cout<<"\n ---> The Total number of the students in "<<div<<" division is : "<<n<<endl;
	int i;
	cout<<"\n  ------------- The Marks of the "<<n<<" students in "<<div<<" Division --------------- "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\n --->The Marks of the "<<PRN[i]<<" is : "<<marks[i];
	}
	
}
int main()
{
	Branch b1;
	b1.setInfo();
	
	return 0;
}
