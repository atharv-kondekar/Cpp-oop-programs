#include<iostream>
#include<string>

using namespace std;

class Outer{
	private:
		int ov;
	protected:
		string name;
		
	public:
		void SetOuter();
		void SetOuterName();
		
		class Inner{
			private:
				int iv;
			
			public:
				void SetInner();
				void DisplayInner();
				void DisplayOuter(Outer & obj);
		};
};

void Outer::SetOuterName()
{
	cout<<"\n Enetr the name in outer class  : ";
	cin.ignore();
	getline(cin,name);
}

void Outer::SetOuter()
{
	cout<<"\n Enter the outer class number : ";
	cin>>ov;
}

void Outer::Inner::SetInner()
{
	cout<<"\n Enter the Inner claSS number : ";
	cin>>iv;
}

void Outer::Inner::DisplayOuter(Outer & obj)
{
	cout<<"\n The name in the Outer class : "<<obj.name;
	cout<<"\n The Outer Number  :  "<<obj.ov;
}

void Outer::Inner::DisplayInner()
{
	cout<<"\n Innner Number : "<<iv;
}

int main()
{
	Outer outerObj;
	outerObj.SetOuter();
	outerObj.SetOuterName();
	
	Outer::Inner innerObj;
	innerObj.SetInner();
	
	innerObj.DisplayOuter(outerObj);
	innerObj.DisplayInner();
	
	return 0;
}
