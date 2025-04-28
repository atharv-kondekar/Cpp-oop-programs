#include<iostream>
#include<string>

using namespace std;

class Laptop{
	private:
		string name;
		float price;
		
	public:
		void SetLaptopDetails();
		void DisplayLaptopDetails();
		
		class Processor{
			private:
				string name;
				int cores;
			
			public:
				void SetProcessorDetails();
				void DisplayProcessorDetails();
		};
};

void Laptop::SetLaptopDetails()
{
	cout<<"\n Enter the Laptop name : ";
	getline(cin,name);
	cout<<"\n Enter the Laptop Price : ";
	cin>>price;
}

void Laptop::DisplayLaptopDetails()
{
	cout<<"\n The Laptop : "<<name;
	cout<<"\n The Price : "<<price;
}

void Laptop::Processor::SetProcessorDetails()
{
	cout<<"\n Enter  Processor Name : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\n Enetr Number of Cores :  ";
	cin>>cores;
}

void Laptop::Processor::DisplayProcessorDetails()
{
	cout<<"\n The Processor : "<<name;
	cout<<"\n The Number of cores : "<<cores;
	cin.ignore();
}

int main()
{
	Laptop l1;
	l1.SetLaptopDetails();
	
	Laptop::Processor p1;
	p1.SetProcessorDetails();
	
	l1.DisplayLaptopDetails();
	p1.DisplayProcessorDetails();
	
	cout<<"\n\n -------------------------------------------------------------------- ";
	
	
	Laptop l2;
	l2.SetLaptopDetails();
	
	Laptop::Processor p2;
	p2.SetProcessorDetails();
	
	l2.DisplayLaptopDetails();
	p2.DisplayProcessorDetails();
	
	Processor p3;
	p3.SetProcessorDetails();
	
	
	return 0;
}
