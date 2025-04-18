#include<iostream>
using namespace std;

int BinarySearch(int arr[],int target,int low,int high)
{
	if(low>high)
		return -1;
		
	int mid;

	mid=(low+high)/2;
		
	if(arr[mid] == target)
		return mid;
		
	else
	if(target<arr[mid])
		return BinarySearch(arr,target,low,mid-1);
		
	else
		return BinarySearch(arr,target,mid+1,high);
			
}

int main()
{
	int n;
	cout<<"\n Enter -> the size of the Array : ";
	cin>>n;
	
	int Arr[n];
	cout<<"\n Enter the "<<n<<" Elemnts in your array : ";
	for(int i=0;i<n;i++)	
	{
		cin>>Arr[i];
	}
	
	int target;
	cout<<"\n Enter the atrget Element for the search : ";
	cin>>target;
	
	int low=0;
	int high=n-1;
	
	int index=BinarySearch(Arr,target,low,high);
	
	if(index>=0)
		cout<<"\n The Element is found at "<<index<<" index";
	
	else
		cout<<"\n The element is not Found ";
	
	return 0;
}
