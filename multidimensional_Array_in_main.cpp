#include<iostream>
using namespace std;

class Branch{
	
	private:
		string name;
		string year;
		string PRN[100];
		float cgpa[100];
		int n;
		void diplayInfo();
		void sort();
		
	public:
		void setInfo(bool);
};

void Branch::setInfo(bool firstTime)
{
	if(firstTime)
	{
		cout<<"\n Enter -> The Branch Name : ";
		cin.ignore();
		getline(cin,name);
	}
	
	cin.ignore();
	cout<<"\n Enter -> The Year : ";
	getline(cin,year);
	cout<<"\n Enter -> The total Number of students in "<<year<<" year : ";
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
	cout<<"\n ----- >> Year :  "<<year<<endl;
		
	cout<<"\n ---------------- The CGPA of the "<<n<<" students in "<<year<<" "<<" --------------";
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"\n\t The CGPA of the "<<PRN[i]<<" is : "<<cgpa[i];
	}
	cout<<"\n";
}

int main()
{
	int v,i,w,j;
	cout<<"\n Enter the totals Departments in the  College : ";
	cin>>v;
	
	cout<<"\n Enter How many Years Required for the Graduation ? : ";
	cin>>w;
	
	Branch b[v][w];
	int a=0;
	
	for(i=0;i<v;i++)
	{
		bool firstTime=true;
		for(j=0;j<w;j++)
		{
			b[i][j].setInfo(firstTime);
			firstTime=false;
		}
		cout<<"\n==================================================================================================\n\n";
	}
	
	return 0;
}
