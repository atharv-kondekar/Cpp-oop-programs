#include<iostream>
using namespace std;

class Simple{
	private:
		int data;
	
	public:
		Simple();
		void Set();
		Simple(Simple & obj);
		void display();
};

Simple::Simple()
{
	data=0;
}

void Simple::Set()
{
	cout<<"\n Enter the Number : ";
	cin>>data;
}

Simple::Simple(Simple & obj)
{
	data=obj.data;
}

void Simple::display()
{
	cout<<"\n The Number : "<<data;
}

int main()
{
	Simple s1;
	s1.Set();
	cout<<"\n ------ The S1 Object ";
	s1.display();
	
	cout<<"\n ------ The s2 Object ";
	Simple s2(s1);
	cout<<"\n Copying the S1 in the S2 object ";
	s2.display();
	
	
	cout<<"\n\n ---- Let's See What happen if we change the value of the s1 Object ------ ";
	s1.Set();
	cout<<"\n ------ The S1 Object ";
	s1.display();
	cout<<"\n ------ The s2 Object ";
	s2.display();
	
	
	cout<<"\n\n ---- Let's See What happen if we change the value of the s2 Object ------ ";
	s2.Set();
	cout<<"\n ------ The S1 Object ";
	s1.display();
	cout<<"\n ------ The s2 Object ";
	s2.display();
	
	
	/*
		Note : 
		     s4=s3 it is safe for basic like int 
		     but when the pointer comes it not safe 
	
	*/
	cout<<"\n *********Note : s4=s3 it is safe for basic like int but when the pointer comes it not safe ******** \n ";
	cout<<"\n\n Using the assignment operator for the s3 and s4 object " "(s4=s3)" " \n";
	Simple s3,s4;
	s3.Set();
	cout<<"\n ------ The S3 Object ";
	s3.display();
	cout<<"\n ------ The S4 Object ";
	s4=s3;
	s4.display();
	
	cout<<"\n\n ---- Let's See What happen if we change the value of the s3 Object ------ ";
	s3.Set();
	cout<<"\n ------ The S3 Object ";
	s3.display();
	cout<<"\n ------ The S4 Object ";
	s4.display();

	cout<<"\n\n ---- Let's See What happen if we change the value of the s4 Object ------ ";
	s4.Set();
	cout<<"\n ------ The S3 Object ";
	s3.display();
	cout<<"\n ------ The S4 Object ";
	s4.display();
	
	return 0;
}
