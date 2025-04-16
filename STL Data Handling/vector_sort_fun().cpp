#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"\n Enter how many elements you want to store ? : "	;
	cin>>n;
	
	int i;
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter the "<<i+1<<" number in the vector : ";
		cin>>arr[i];
	}
	
	vector<int> v_arr(arr,arr+sizeof(arr)/sizeof(int));
	
	cout<<"\n The elements in your vector : ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<v_arr[i];
	}
	
	
	
	
	
    char ch;
    cout<<"\n Do you want to sort vector elements ? (y/n): ";
    cin>>ch;
    
    if(ch=='y' || ch=='Y')
    {
    	int choice;
    	cout<<"\n 1. First elemnts  ";
    	cout<<"\n 2. Last Elements ";
    	cout<<"\n 3. Whole Vector ";
    	cout<<"\n Enter the Which side  elemnts you want to sort : ";
    	cin>>choice;
    	
    	switch(choice)
    	{
    		case 1:{
    			int elements;
    			cout<<"\n Enter first how many elements you want to sort  ?:  ";
    			cin>>elements;
    			
    			sort(v_arr.begin(),v_arr.begin()+elements);
    			
    			cout<<"\n The Sorted Vector first "<<elements<<" elements ";
				for(i=0;i<n;i++)
				{
					cout<<" "<<v_arr[i];
				}
				
				break;
			}
			
			case 2:{
				int elements;
				cout<<"\n Enter from last how many elements you want to sort ? :  ";
				cin>>elements;
				
				sort(v_arr.begin()+elements,v_arr.end());
				
				cout<<"\n The Sorted Vector of last "<<elements<<" elements : ";
				for(i=0;i<n;i++)
				{
					cout<<" "<<v_arr[i];
				}
				
				break;
			}
			
			case 3:{
				
				sort(v_arr.begin(),v_arr.end());
				
				cout<<"\n The Whole Sorted Vector ";
				for(i=0;i<n;i++)
				{
					cout<<" "<<v_arr[i];
				}
				
				break;
			}
			
			default:{
				cout<<"\n Enter the valid choice ";
				break;
			}
		}
	}
	
	cout<<"\n\n\n --------- Thank You ---------";
	
	return 0;
}
