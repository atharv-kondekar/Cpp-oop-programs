#include<iostream>
using namespace std;

class Person
{
	private :
		int pin;
		int balance;
	
	public :
		void setInfo();
		void withDraw();
		void deposit();
		void checkBalance();
		void perform();
};

void Person::setInfo()
{
	cout<<"\n Set -> Your PIN : ";
	cin>>pin;
	
	int check;
	cout<<"\n Enter -> Your PIN : ";
	cin>>check;
	
	if(check == pin )
	{
		cout<<"\n Set -> The Current balance : ";
		cin>>balance;
		perform();
	}
	
	else
	{
		cout<<"\n !!!!!!! You entered Wrong PIN !!!!!!!";
	}
}

void Person::withDraw()
{
	int amount;
	cout<<"\n Enter -> The withdraw amount : ";
	cin>>amount;
	
	if(balance ==0 || amount > balance )
	{
		cout<<"\n !!!!!!! You can't Withdraw Money !!!!!!!!";
	}
	
	else
	{
		balance-=amount;
		cout<<"\n --->  -"<<amount;
	}
}

void Person::deposit()
{
	int amount;
	cout<<"\n Enter -> The Deposit amount : ";
	cin>>amount;
	
	balance+=amount;
	cout<<"\n ---> +"<<amount;
}

void Person::checkBalance()
{
	cout<<"\n <<<<<<<<< ========= The Total balance is : "<<balance<<" ==========>>>>>>>>>>";
}

void Person::perform()
{
	int check;
	char ch;
	char exit;
	
	cout<<"\n Do you want to Perform Any Operations (y/n): ";
	cin>>ch;
	
	if(ch=='y' || ch=='Y')
	{
		int count =0;
		
		do
		{
			cout<<"\n **** The Following Operations You can perform **** "<<endl;
			cout<<"\n 1. Withdraw ";
			cout<<"\n 2. Deposit";
			cout<<"\n 3. Check Balance";
			
			int choice;
			cout<<"\n Enter -> Which Operation You want to Perform : ";
			cin>>choice;
		
			cout<<"\n Enter -> Your PIN : ";
			cin>>check;
			
			if( check== pin )
			{
				switch(choice)
				{
					case 1:{
						withDraw();
						count =0;
						cout<<"\n ---------------------------------------------------------------------------------------- \n";
						break;
					}
					
					case 2:{
						deposit();
						count =0;
						cout<<"\n ---------------------------------------------------------------------------------------- \n";
						break;
					}
					
					case 3:{
						checkBalance();
						count =0;
						cout<<"\n ---------------------------------------------------------------------------------------- \n";
						break;
					}
					
					default:{
						cout<<"\n !!!! You Entered Wrong Choice !!!!";
						break;
					}
				}
			}
			
			else
			{
				cout<<"\n !!!!!!!***  Security Alert : You Entered Wrong PIN *** !!!!!!!!"<<endl;
				cout<<"\n ---------------------------------------------------------------------------------------- \n";
				count++;
			}
	
			if(count == 3){
				
				cout<<"\n !!! You Entered Wrong Pin 3rd time in a ROW !!!";
				cout<<"\n ####### Your Card is BLOCKED #######"<<endl;
				break;
			}
						
		
			cin.ignore();
			cout<<"\n ~~~~~ Do You want to continue ? (y/n) : ";
			cin.get(exit);
			cout<<"\n";
		}while(exit== 'y' || exit=='Y');	
	}
	
	cout<<"\n THANK YOU :) ";
}

int main()
{
	Person p1;
	p1.setInfo();
	
	return 0;
}
