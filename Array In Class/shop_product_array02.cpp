#include<iostream>
using namespace std;

class Shop{
	private:
		int productId[100];
		int productPrice[100];
		int counter;
	
	public:
		void initCounter(int );
		void setInfo();
		void displayData();
};

void Shop::initCounter(int n)
{
	if(n>100)
	{
		cout<<"\n The Limit is 100 !!!! ";
		exit(0);
	}
	
	counter=0;
}

void Shop::setInfo()
{
	cout<<"\n Enter -> The Id of the "<<counter+1<<" no item : ";
	cin>>productId[counter];
	cout<<"\n Enter -> The price of the "<<productId[counter]<<" item : ";
	cin>>productPrice[counter];
	counter++;
	cout<<"\n --------------------------------------------------------------------------\n";
}

void Shop::displayData()
{
	int i;
	for(i=0;i<counter;i++)
	{
		cout<<"\n The Price of the "<<productId[i]<<" item is : "<<productPrice[i];
	}
}

int main()
{
	int n;
	cout<<"\n Enter -> The number  product's data  you want to fill : ";
	cin>>n;
	
	Shop s1;
	s1.initCounter(n);
	
	int i;
	for(i=0;i<n;i++)
	{
		s1.setInfo();
	}
	
	s1.displayData();
	
	return 0;
}
