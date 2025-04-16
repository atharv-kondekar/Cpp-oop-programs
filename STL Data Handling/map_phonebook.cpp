#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>

using namespace std;

int main()
{
	map<string,string> phoneBook;
	
	int n;
	cout<<"\n Enter how many keys you want to stpre in the map ? : ";
	cin>>n;
	
	cin.ignore();
	
	string keys;
	string data;
	string key_arr[10]={""};
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter the name : ";
		getline(cin,keys);
		cout<<"\n Enter the Phone Number of the "<<keys<<" person : ";
		cin>>data;
		
		cin.ignore();
		
		if(data.size()!=10)
			cout<<"\n You mised some numbers in the phone number ";
			continue ;
		
		phoneBook[keys]=data;
		key_arr[i]=keys;
		
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n name : "<<key_arr[i]<<": "<<phoneBook[key_arr[i]];
	}
		
	return 0;
}
