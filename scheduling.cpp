#include<iostream>
using namespace std;

void inttervalScheduling(int start[],int end[],int n)
{
	cout<<"\n Selected Intervals : \n";
	int last=-1;
	int i;
	
	for(i=0;i<n;i++)
	{
		if(start[i]>=last)
		{
			cout<<"start : "<<start[i]<<"\tEnd : "<<end[i]<<endl;
			last=end[i];
		}
	}
}

int main()
{
	int start[]={2,4,6,8};
	int end[]={3,5,7,9};
	int n=sizeof(start)/sizeof(start[0]);
	
	inttervalScheduling(start,end,n);
	return 0;
}
