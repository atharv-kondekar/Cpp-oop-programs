#include<iostream>
using namespace std;

class test{
	private:
		int code;
		static int count;
	
	public:
		void setcode()
		{
			code=++count;
		}
		
		void showcode()
		{
			cout<<"\n the Object Number : "<<code;
		}
		
		static void Showcount()
		{
			cout<<"\n Count : "<<count;
			
		//	cout<<"\n Code = "<<code; gives the error because only access static variables
		}
};

int test::count;

int main()
{
	test t1,t2;
	
	t1.setcode();
	t2.setcode();
	test::Showcount();
	
	// Calling the static Funtion with object 
	t1.Showcount(); // c++ allows it but generally less prefered 
					// But After the calling the 'static funtion' don't use the data of the t1 object 
	
	test t3;
	t3.setcode();
	test::Showcount();
		
	t1.showcode();
	t2.showcode();
	t3.showcode();
	
	return 0;
}
