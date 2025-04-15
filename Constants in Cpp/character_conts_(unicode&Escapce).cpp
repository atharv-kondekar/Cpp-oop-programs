// Character Constants 
 
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	// Single Character Constant 
	char ch='A';
	cout<<ch<<endl;
	
	// Escape Sequence charracter constant 
	char newline='\n';
	char tab = '\t';
	char backslash='\\';
	char backspace='\b';
	
	cout<<" This is "<<tab<<" tabbed "<<newline;
	cout<<"\n This is Back_slashed = "<<backslash;
	cout<<"\n This is Backspaced = "<<backspace;
	
	// Unicode Character Constant 

	//setConsoleOutputCP(65001);
	SetConsoleOutputCP(65001);
	cout<<"\n Cool Emoji : "<<endl;
	
	return 0;
}
