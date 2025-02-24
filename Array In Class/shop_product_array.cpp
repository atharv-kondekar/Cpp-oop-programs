#include<iostream>
using namespace std;

class Shop{
	private:
		static const int maxSize=100;
		int productId[maxSize];
		int productPrice[maxSize];
		int counter;
		int size;
	
	public:
		void setSize(int );
		void setInfo();
		void displayInfo();
		void initCounter();
};

void Shop::setSize(int s)
{
	if(s>maxSize)
	{
		cout<<"\n The Product limit is : "<<maxSize<<" so setting to : "<<maxSize<<endl;
		size=maxSize;
	}
	
	else
	{
		size=s;
	}
}

void Shop::initCounter()
{
	counter=0;
}

void Shop::setInfo()
{
	if(counter>=size)
	{
		cout<<"\n The limit is reached ......... ";
		return ;
	}
	cout<<"\n Enter -> The Id of the "<<counter+1<<" no item : ";
	cin>>productId[counter];
	cout<<"\n Enter -> The price of the "<<productId[counter]<<" item : ";
	cin>>productPrice[counter];
	counter++;
	cout<<"\n --------------------------------------------------------------------------\n";
}

void Shop::displayInfo()
{
	int i;
	for(i=0;i<counter;i++)
	{
		cout<<"\n The Price of the "<<productId[i]<<" item is : "<<productPrice[i];
	}
}

int main()
{
	int size;
	cout<<"\n Enter ->  Total Products are in the shop : ";
	cin>>size;
	
	int n;
	cout<<"\n Enter -> The number  product's data  you want to fill : ";
	cin>>n;
	
	if(n>size)
	{
		cout<<"\n The Number  product's data  you want to fill is Greater Than Total Products are in the shop";
		exit(0);
	}
	
	int i;
	Shop s1;
	s1.setSize(size);
	s1.initCounter();
	
	for(i=0;i<n;i++)
	{
		s1.setInfo();
	}
	
	s1.displayInfo();
	
	return 0;
}
