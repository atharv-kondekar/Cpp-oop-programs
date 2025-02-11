#include<iostream>
#include<vector>
#include<string>

using namespace  std;

class Book{
	
	private:
		string title;
		string authorName;
		int pages;
		bool format;
		vector<float>Chapterpages;
		int Chapters;
	
	public:
		Book();
		void setInfo();
		void disPlay();
		
};

Book::Book()
{
	cout<<"\n You are in the default Constructor ";
	title = "";
    authorName = "";

    pages = 0;
    Chapters = 0;
    
    format = false;
    
    Chapterpages.clear();
}


void Book::setInfo()
{
	cout<<"\n Enter -> The title of the Book : ";
	//cin.ignore();
	getline(cin,title);
	
	cout<<"\n Enter -> Author Name of the "<<title<<" Book : ";
	getline(cin,authorName);
	
	cout<<"\n Enter -> The Total pages in the "<<title<<" Book : ";
	cin>>pages;
	
	cout<<"\n Enter -> Total Chapters of the "<<title<<" Book : ";
	cin>>Chapters;
	
	char ch;
	cout<<"\n Enter -> The book is of HardCover or In Paperback (h/p) : ";
	cin>>ch;
	
	
	if(ch=='h' || ch== 'H')
		format=true;
	else
		format=false;
	
	Chapterpages.resize(Chapters);
	int count=0;
	int i;
	
	for(i=0;i<Chapters;i++)
	{
		cout<<"\n Enter -> The total Pages for the "<<i+1<<" chapter : ";
		cin>>Chapterpages[i];
		
		count+=Chapterpages[i];
		
		if( i == Chapters-1 )
		{
			if(count < pages)
				cout<<"\n You Entred wrong Pages !!!!!! ";
		}
		
		if(count > pages)
		{
			cout<<"\n You Entered Wrong Information !!!!!!!!!!!! ";
			break;
		}
		
		
	}
}

void Book::disPlay()
{
	cout<<"\n\n ----------- The BOOK = "<<title<<" -------------------\n";
	cout<<"\n ---->> The Authour Of  "<<title<<" Book : "<<authorName;
	cout<<"\n ---->> The Total Pages Of  "<<title<<" Book : "<<pages;
	if(format==1)
		cout<<"\n ---->> The Format Of  "<<title<<" Book : HardCover";
	else
		cout<<"\n ---->> The Format Of  "<<title<<" Book : PaperBack";
		
	cout<<"\n ---->> The Total Chapters Of "<<title<<" Book : "<<Chapters;
	int i;
	for(i=0;i<Chapters;i++)
	{
		cout<<"\n ---->> The Pages of the "<<i+1<<" chapter is : "<<Chapterpages[i];
	}
	
}

int main()
{
	Book b1;
	b1.setInfo();
	b1.disPlay();
	return 0;
}
