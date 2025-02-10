#include<iostream>
using namespace std;

int main()
{
	enum Vechile{
		TwoWheeler=1,FourWheeler,HeavyVechile
	};
	
	int parkingCharges[]={0,20,50,100};
	
	cout << "\n*************** The Types Of Vehicle that can park ****************";
    cout << "\n ----- 1. Two Wheeler (?20) ----- ";
    cout << "\n ----- 2. Four Wheeler (?50) ----- ";
    cout << "\n ----- 3. Heavy Vehicle (?100) ----- "<<endl;
    
    int ch;
    cout<<"\n Enter -> The Vechicle type : ";
    cin>>ch;
	
	if(ch>=TwoWheeler && ch<=HeavyVechile)
		cout<<"\n The Parking charges for your vehicle is : "<<parkingCharges[ch]<<" rs";
	else
		cout<<"\n Invalid choice ";
	
	return 0;
}


/*
?? Which Code is Better?
? 1st Code (Using enum) is better because:

More Readable: Using enum makes it clear what 1, 2, and 3 represent.
Easier to Modify: If you need to change parking charges, you just update the array instead of modifying multiple if statements.
Less Code Duplication: The if condition directly checks validity and retrieves values from the array, making it more efficient.
Scalability: If a new vehicle type is added (e.g., ElectricVehicle), the array and enum can be updated quickly.
*/
/*
int main()
{
	====2nd  code =====
	
	cout << "\n*************** The Types Of Vehicle that can park ****************";
    cout << "\n ----- 1. Two Wheeler (?20) ----- ";
    cout << "\n ----- 2. Four Wheeler (?50) ----- ";
    cout << "\n ----- 3. Heavy Vehicle (?100) ----- "<<endl;

	int ch;
    cout<<"\n Enter -> The Vechicle type : ";
    cin>>ch;

	if(ch==1)	
		cout<<"\n Charges = 20 "
	else
	if(ch==2)	
		cout<<"\n Charges  = 50 ";
	else
	if(ch==3)	
		cout<<"\n Charges  = 100 ";
	
	else
		cout<<"\n Invalid";
	return 0;
}
*/
