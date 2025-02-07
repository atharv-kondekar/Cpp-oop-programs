#include<iostream>
using namespace std;

class Branch{
	
	private:
		string name;
		string year;
		string PRN[100];
		float cgpa[100];
		char div;
		int n;
		void diplayInfo();
		void sort();
		
	public:
		void setInfo();
};

void Branch::setInfo()
{
	cout<<"\n Enter -> The Branch Name : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\n Enter -> The Year for Division : ";
	getline(cin,year);
	cout<<"\n Enter -> The Division of the Class : ";
	cin>>div;
	cout<<"\n Enter -> The total Number of students in "<<year<<" "<<div<<" Division : ";
	cin>>n;
	
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<"\n Enter the PRN of the "<<i+1<<"st student : ";
			cin>>PRN[i];
			cout<<"\n Enter the CGPA of the "<<i+1<<"st student : ";
			cin>>cgpa[i];
		}
		
		else
		if(i==1)
		{
			cout<<"\n Enter the PRN of the "<<i+1<<"nd student : ";
			cin>>PRN[i];
			cout<<"\n Enter the CGPA of the "<<i+1<<"nd student : ";
			cin>>cgpa[i];
		}
		
		else
		if(i==2)
		{
			cout<<"\n Enter the PRN of the "<<i+1<<"rd student : ";
			cin>>PRN[i];
			cout<<"\n Enter the CGPA of the "<<i+1<<"rd student : ";
			cin>>cgpa[i];
		}
		
		else
		{
			cout<<"\n Enter the PRN of the "<<i+1<<"th student : ";
			cin>>PRN[i];
			cout<<"\n Enter the CGPA of the "<<i+1<<"th student : ";
			cin>>cgpa[i];
		}
	}
	
	sort();
	diplayInfo();
}

void Branch::sort()
{
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(PRN[j] > PRN[j+1])
			{
				swap(PRN[j],PRN[j+1]);
				swap(cgpa[j],cgpa[j+1]);
			}
		}
	}
}

void Branch::diplayInfo()
{
	cout<<"\n ************ The Dept Name : "<<name<<" ***********";
	cout<<"\n ----- >> Year :  "<<year;
	cout<<"\n ----- >> Division : "<<div<<endl;
	
	cout<<"\n ---------------- The CGPA of the "<<n<<" students in "<<year<<" "<<div<<" division"<<" --------------";
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"\n\t The CGPA of the "<<PRN[i]<<" is : "<<cgpa[i];
	}
}

int main()
{
	int v,i;
	cout<<"\n Enter the totals Departments in the  College : ";
	cin>>v;
	
	Branch b[v];
	
	for(i=0;i<v;i++)
	{
		b[i].setInfo();
		cout<<"\n==================================================================================================\n\n";
	}
	
	return 0;
}
