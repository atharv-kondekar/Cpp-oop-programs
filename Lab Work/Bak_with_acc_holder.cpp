#include<iostream>
using namespace std;

class Bank{
	
	private:
		float balance;
		string accountHolder;
		string account;
		long long int accountNo;
	
	public:
		Bank();
		Bank(float,string,string,long int);
		void Setinfo();
		void withdraw();
		void deposit();
		void checkbalance();
		void performOperations();
		~Bank();
};

Bank::Bank(float bal,string holder, string acc ,long int number)
{
		cout<<"\n You are in the parametrised Constructor \n";
		 balance = bal;
		 accountHolder = holder;
		 account = acc;
		 accountNo = number;
		 performOperations();
}

Bank::Bank()
{
	cout<<"\n You are in the default Constructor "<<endl;
	balance=0.00;
	accountHolder="None";
	account="None";
	accountNo=000000;
}

void Bank::Setinfo()
{
	cin.ignore();
	cout<<"\n Enter -> \n The Account Holder :  ";
	getline(cin,accountHolder);

	cout<<"\n Enter -> \n The Account Type : ";
	getline(cin,account);
	cout<<"\n Set -> \n Your Current balance : ";
	cin>>balance;
	cout<<"\n Enter -> \n The Account Number : ";
	cin>>accountNo;
	
	performOperations();
}

void Bank::withdraw()
{
	
	int amount;
	cout<<"\n Enter ->  Withdraw Amount  : ";
	cin>>amount;
	
	if(amount > balance || balance==0)
	{
		cout<<"\n !!!!!! You can't withdraw money !!!!!!!! "<<endl;
	}
	
	else{
		cout<<"\n ---->  -"<<amount<<endl;
		balance-=amount;
	}
}

void Bank::deposit()
{
	int amount;
	cout<<"\n Enter-> the  Deposit Amount : ";
	cin>>amount;
	
	cout<<"\n ----->  +"<<amount<<endl;
	balance+=amount;
}

void Bank::checkbalance()
{
	cout<<"\n ---> The Account Holder : "<<accountHolder;
	cout<<"\n ---> The Account Type : "<<account;
	cout<<"\n ---> The Account Number : "<<accountNo;
	cout<<"\n <<<<<<<<<<< ======== The Total Balance = "<<balance<<"========>>>>>>>>>>>>>>"<<endl; 
}

void Bank::performOperations()
{
	char ch;
	int ope;
	char exit;
	
	cout<<"\n Do you want to perform some operations ?(y/n) :  ";
	cin>>ch;
	
	if(ch=='y' || ch=='Y')
	{
		do
		{
			cout<<"\n The following Operations you can perform : "	;
			cout<<"\n 1. Withdraw ";
			cout<<"\n 2. deposit ";
			cout<<"\n 3. Check Balance ";
			
			cout<<"\n Enter which operation you want to perform : ";
			cin>>ope;
			
			switch(ope)
			{
				case 1:
				{
					withdraw();
					break;
				}
				
				case 2:
				{
					deposit();
					break;
				}
				
				case 3:
				{
					checkbalance();
					break;
				}
				
				default:
				{	
					cout<<"\n You Entered Wrong Choice ";
					break;
				}
			}
			cout<<"\n do you want to Exit (y/n) : ";
			cin>>exit;
			
		}while(exit=='N' || exit=='n');
	}
	
	cout<<"\n Thank You :) ";
}

Bank::~Bank()
{
	cout<<"\n The Account for : "<<accountHolder<<" is Closed !!!!!!!!! \n";
}

int main()
{
	
	Bank  b1;
	
	{
		Bank b2(2000.45,"Rohan Das","Saving Account",3471926580);
	}
	
	{
		Bank b3;
		b3.Setinfo();
	}
	
	return 0;
}
