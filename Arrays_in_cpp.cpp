#include<iostream>
using namespace std;

void readData(int marks[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"\n Enter the Marks of the  "<<i+1<<"st student : ";
			cin>>marks[i];
		}
		
		else
		if(i==1)
		{
			cout<<"\n Enter the Marks of the  "<<i+1<<"nd student : ";
			cin>>marks[i];
		}
		
		else
		if(i==2)
		{
			cout<<"\n Enter the Marks of the  "<<i+1<<"rd student : ";
			cin>>marks[i];
		}
		
		else
		{
			cout<<"\n Enter the Marks of the  "<<i+1<<"th student : ";
			cin>>marks[i];	
		}
		
	}
}

void DisplayData(int marks[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(i==0)
			cout<<"\n The Marks of the  "<<i+1<<"st student is : "<<marks[i];
			
		else
		if(i==1)
			cout<<"\n The Marks of the  "<<i+1<<"nd student is : "<<marks[i];
		
		else
		if(i==2)
			cout<<"\n The Marks of the  "<<i+1<<"rd student is : "<<marks[i];
		
		else
			cout<<"\n The Marks of the  "<<i+1<<"th student is : "<<marks[i];
	}
}

int main()
{
	int n;
	cout<<"\n Enter the Total Number of students : "		;
	cin>>n;
	
	int marks[n];
	readData(marks,n);
	
	cout<<endl;
	
	DisplayData(marks,n);
	
	return 0;
}
