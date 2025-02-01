#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

class Bill{
	private :
		int n;
		vector<float>price;
		vector<float>quantity;
		vector<float>total;
		vector<string>name;
	
	public:
		void setData();
		void displayBill();
};

void Bill::setData()
{
	cout<<"\n Enter How Many Products You Want To Purchase : ";
	cin>>n;
	cin.ignore();
	
	name.resize(n);
	price.resize(n);
	quantity.resize(n);
	total.resize(n);
	
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter the Name of the "<<i+1<<"product : ";
		getline(cin,name[i]);
		cout<<"\n Enter the price of the "<<name[i]<<"product : ";
		cin>>price[i];
		cout<<"\n Enter the quantity of the "<<name[i]<<"product : ";
		cin>>quantity[i];
		total[i]=quantity[i]*price[i];
		
		cin.ignore();
	}
}

void Bill::displayBill()
{
	float grandtotal=0;
	int i;
	
	//cout<<"Product   "<<"   Quantity  "<<"    Price    "<<"     Total   "<<endl ;
	for(i=0;i<n;i++)
	{
		cout<<" "<<setw(10)<<name[i]<<" "<<setw(5)<<quantity[i]<<" "<<setw(7)<<price[i]<<" "<<setw(10)<<total[i]<<endl;
		grandtotal=grandtotal+total[i];
	}
	cout<<"==========================================================================================================="<<endl;
	cout<<"Grandtotal : "<<setw(32)<<grandtotal;
}

int main()
{
	Bill b1;
	b1.setData();
	b1.displayBill();
	
	return 0;
}
