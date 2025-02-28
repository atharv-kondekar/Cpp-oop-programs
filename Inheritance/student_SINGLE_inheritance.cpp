#include<iostream>
using namespace std;

class BasicInfo{
	private:
		int age;
		int rollNo;
		string name;
	
	public:
		void SetInfo();
		void Display();
};

void BasicInfo::SetInfo()
{
	cout<<"\n Enter -> Roll No of the Student : ";
	cin>>rollNo;
	cin.ignore();
	
	cout<<"\n Enter -> The Name of the Student : ";
	getline(cin,name);
	cout<<"\n Enter -> The age of the Student : ";
	cin>>age;
}

void BasicInfo::Display()
{
	cout<<"\n The roll no : "<<rollNo;
	cout<<"\n The Name of the "<<rollNo<<" rollNo  is : "<<name;
	cout<<"\n The age of the student : "<<age;
}

class Result:public BasicInfo{
	private:
		float marks[3];
		float sum;
		float avg;
	
	public:
		void setResult();
		void DisplayResult();
};

void Result::setResult()
{
	sum=0;
	for(int i=0;i<3;i++)
	{
		cout<<"\n Enter -> The Marks of the Sub"<<i+1<<" : ";
		cin>>marks[i];
		sum=sum+marks[i];
	}
	avg=sum/3;
}

void Result::DisplayResult()
{					
	for(int i=0;i<3;i++)
	{
		cout<<"\n The Marks of the Sub"<<i+1<<"  is : "<<marks[i];
	}
	cout<<"\n ------- The Total Sum : "<<sum;
	cout<<"\n ------- The Average : "<<avg<<endl;
}

int main()
{
	int n;
	cout<<"\n Enter -> The Students in your class : ";
	cin>>n;
	
	Result obj[n];
	
	int i;
	for(i=0;i<n;i++)
	{
		obj[i].SetInfo();
		obj[i].setResult();
	}
	
	for(i=0;i<n;i++)
	{
		obj[i].Display();
		obj[i].DisplayResult();
		cout<<"\n-------------------------------------------------------------------------\n";
	}
	
	return 0;
}
