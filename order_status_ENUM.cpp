#include<iostream>
using namespace std;

int main()
{
	
	enum Status{
		Pending=1,
		Shipped,
		Delivered,
		Cancelled
	};
	
	cout<<"\n ********** The Status of the Order ********* ";
	cout<<"\n ---- Pending ----- ";
	cout<<"\n ---- shipped ----- ";
	cout<<"\n ----  Delivered ----- ";
	cout<<"\n ---- cancled ----- "<<endl;
	
	int ch;
	cout<<"\n Enter the status of the delivery:  ";
	cin>>ch;
	
	 switch (ch) {
        case Pending:
            cout << "Your order is still **Pending**." << endl;
            break;
        case Shipped:
            cout << "Your order has been **Shipped**." << endl;
            break;
        case Delivered:
            cout << "Your order has been **Delivered**. Enjoy!" << endl;
            break;
        case Cancelled:
            cout << "Your order has been **Cancelled**." << endl;
            break;
        default:
            cout << "Invalid status code. Please enter a number between 1 and 4." << endl;
    }
}
