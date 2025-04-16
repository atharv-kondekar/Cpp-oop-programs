#include<iostream>
using namespace std;

class item{
	
	private:
		static int count;
		int Data;
	
	public:
		void GetData(int a){
			Data=a;
			count++;
		}
		
		void DisplayCount()
		{
			cout<<"\n count : "<<count;
		}
};

int item::count;

int main()
{
	item a,b,c;
	a.DisplayCount();
	b.DisplayCount();
	c.DisplayCount();
	
	cout<<"\n\n After Giving the Data ";
	
	a.GetData(100);
	a.DisplayCount();
	
	a.GetData(200);
	b.DisplayCount();
	
	c.GetData(300);
	c.DisplayCount();
	
	cout<<"\n\n Now Displaying the GetCount() Funtion of all object ";
	
	a.DisplayCount();
	b.DisplayCount();
	c.DisplayCount();
	
	
	
	
	return 0;
}
