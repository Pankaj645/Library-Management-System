#include<iostream>   
#include<iomanip>    
#include<fstream>    
#include<conio.h>    
#include<string.h>   
#include<stdio.h>    
#include <cstdlib>   
#include <windows.h> 
using namespace std;

void Gotoxy(short , short ); 
void Display(); //Display Function
void Add();     //Add Function
void Search();  //Search Function
void Sort();    //Sort Function
void Del();     //Delete Function
void Modify();  //Modify Function
void SearchByName(); //Search by Name
void SearchById();   //Search by Id
void SearchByCategory();  //Search by Category
void SearchByPub.Com();    //Search by Publcation Company
void SearchByPub.Year();   //Search by Publishing Year
void SearchByAuthor();    //Search by Author
void Sortas();     //Sort in ascending order
void Sortds();     //Sort in descending order
void SortasName(); //Sort in ascending order by Name
void SortasId();   //Sort in ascending order by Id
void SortasCategory();  //Sort in ascending order by Category
void SortasPub.Com();   //Sort in ascending order by Publication Company
void SortasPub.Year();  //Sort in ascending order by Publication Year
void sortasAuthor();  //Sort in ascending order by Author
void SortdsName();   //Sort in descending order by Name
void sortdsId();     //Sort in descending order by Id
void SortdsCategory();  //Sort in descending order by Category
void SortdsPub.Com();    //Sort in descending order by Publication Company
void sortdsPub.Year();   //Sort in descending order by Publication Year
void SortdsAuthor();    //Sort in descending order by Author
void DelByName();    //Delete by Name
void DelById();      //Delete by Id
void DelByCategory();  //Delete by Category
void DelByPub.Com();    //Delete by Publication Company
void DelByPub.Year();   //Delete by Publication Year
void DelByAuthor();    //Delete by Author
void ModifyByName();      //Modify by Name
void ModifyById();        //Modify by Id
void ModifyByCategory();  //Modify by Cateory
void ModifyByPub.Com();    //Modify by Publication Company
void ModifyByPub.Year();    //Modify by Publication Year
void ModifyByAuthor();    //Modify by Author

struct book       //structure of name book
{
	int bookid;                
	char bookname[60];         
	char authorname[40];       
	char bookcategory[20];     
	char bookpubcom[30];       
	char bookpubmonth[10];     
	int bookpubyear;           
};
   
    book books[1000];          //array of structures
    int n=0;                   //global variable for number of records
    

int main()
{
	char ch1;
	while (1)
    {
		system("cls");
	   
		cout << setw( 25 ) << "-------------" << endl

          << setw( 25 ) << "| MAIN MENU |" << endl

          << setw( 25 ) << "-------------" << endl << endl

          << setw( 52 )

          << "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

 

          << setw( 25 ) << "( A ) Add Book" << endl << endl

          << setw( 31 ) << "( O ) Sort all Books" << endl << endl

          << setw( 33 ) << "( S ) Search all Books" << endl << endl

          << setw( 33 ) << "( D ) Diplay all Books" << endl << endl

          << setw( 30 ) << "( T ) Delete a Book" << endl << endl

          << setw( 40 ) << "( M ) Update Book Information" << endl << endl
         
		  << setw( 21 ) << "( Q ) Quit" << endl << endl
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,21);
	     
		switch(getche())
		{
			case 'a':
		 	case 'A':Add();break;
         
			case 'd':
		 	case 'D': Display();break;
         
		 	case 'S':
		 	case 's':Search();break;
         
		 	case 't':
		 	case 'T':Del();break;
		 
		 	case 'O':
		 	case 'o':Sort();break;
         
		 	case 'm':
		 	case 'M':Modify();break;
		 
		 	case 'q':
		 	case 'Q':exit(0);break;
         
		 	default:
			puts("\n\n \t\tSelect only from the given menu.....\n \t\tpress enter to to go to main menu......");
			getch();
       }
     }
    
	getch();
 }


****************Display*********************


void Display(void)
	{
		system("cls");
		cout<< "In display function\n";
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
		cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
		cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
		for(int i=0;i<n;i++)
			{
				cout<<setw(10)<<books[i].bookid<<setw(50)<<books[i].bookname<<setw(30)<<books[i].authorname<<setw(30)<<books[i].bookcategory<<setw(30)<<books[i].bookpubcom<<setw(30)<<books[i].bookpubmonth<<setw(30)<<books[i].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
			}
			cout<<"Press enter to goto main manu.....";
			getch();
			
	}
	

**************Add**************
void Add(void)
	{
		char ch;char id1[6],year[4];
		do
		{
			system("cls");
			cout<<endl;
			cout<< "In ADD function\n";
			cout<<"Enter Book Name: ";    
			gets(books[n].bookname);
			//cin.getline(emp[n].name,40);
			//cin.ignore(40,'\n');
			cout<<"Enter Book ID: ";
			gets(id1);
			books[n].bookid=atoi(id1);
			//cin.ignore();
			cout<<"Enter Author Name: ";
			gets(books[n].authorname);
			cout<<"Enter Book Category: ";
			gets(books[n].bookcategory);
			cout<<"Enter Publication Company Name: ";
			gets(books[n].bookpubcom);
			cout<<"Enter Publication Month: ";
			gets(books[n].bookpubmonth);
			cout<<"Enter Publication Year: ";
			gets(year);
			books[n].bookpubyear=atoi(year);
			n++;
		cout<<"Do you want to add more books? [y/n]";
		ch=getch();
		}
		while(ch!='n'&& ch!='N');
	}

*************Search**************
void Search(void)
	{
		system("cls");
	   
	   cout <<setw(30)<< "In Search Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 31 ) << "( N ) Search by name" << endl << endl

          << setw( 29 ) << "( I ) Search by Id" << endl << endl
          
          << setw( 38 ) << "( T ) Search by author name" << endl << endl

          << setw( 35 ) << "( C ) Search by Category" << endl << endl

          << setw( 46 ) << "( P ) Search by Publication Company" << endl << endl

          << setw( 43 ) << "( Y ) Search by Publication Year" << endl << endl
          
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,16);
	
	   switch(getche())
       {
         case 'n':
		 case 'N':SearchByName();break;
         
		 case 'i':
		 case 'I': SearchbyId();break;
         
		 case 't':
		 case 'T': SearchByAuthor();break;
         
		 case 'c':
		 case 'C':SearchByCategory();break;
         
		 case 'p':
		 case 'P':SearchByPub.Com();break;
		 
		 case 'y':
		 case 'Y':SearchByPub.Year();break;
		 
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Search();
		getch();
       }
	}
	
*************Search by Name***************

void SearchByName(void)
	{
		char name[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by name of book\n";
		cout<<"Enter the name of book you want to search: ";
		gets(name);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookname,name)==0)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

*************Search by Author***************
	
void SearchByAuthor(void)
	{
		char author[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by author of book\n";
		cout<<"Enter the author of book you want to search: ";
		gets(author);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].authorname,author)==0)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}	
	
**********Search by Id***********	

void SearchById(void)
	{
		char ids[6];
		int id, loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by Id of book\n";
		cout<<"Enter the id of book you want to search: ";
		gets(ids);
		id=atoi(ids);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookid==id)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
************Search by Category*************	
	
void SearchByCategory(void)
	{
		char category[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by category of book\n";
		cout<<"Enter the category of book you want to search: ";
		gets(category);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookcategory,category)==0)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

**************Search by Publication Company*****************
	
void SearchByPub.Com(void)
	{
		char company[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by publication company of book\n";
		cout<<"Enter the publicaton company of book you want to search: ";
		gets(company);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookpubcom,company)==0)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
***********Search by Publication Year************
	
void SearchByPub.Year(void)
	{
		char year[4];
		int yr,loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Searching by year of publication of book\n";
		cout<<"Enter the year of publication of book you want to search: ";
		gets(year);
		yr=atoi(year);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookpubyear==yr)
			{
				loc=i;
				found = 1;
				cout<< "Record Found!"<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
**************Sort***********

void Sort(void)
{
	system("cls");
	   
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 40 ) << "( A ) Sort in Ascending Order" << endl << endl

          << setw( 41 ) << "( D ) Sort in Descending Order" << endl << endl
          
          <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,8);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'a':
		 case 'A':Sortas();break;
         
		 case 'd':
		 case 'D': Sortds();break;
         
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Sort();
		getch();
       }
}

*********Sort in Ascending Order************

void Sortas(void)
{
	system("cls");
	   
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 29 ) << "( N ) Sort by name" << endl << endl

          << setw( 27 ) << "( I ) Sort by Id" << endl << endl
          
          << setw( 36 ) << "( T ) Sort by author name" << endl << endl

          << setw( 33 ) << "( C ) Sort by Category" << endl << endl

          << setw( 44 ) << "( P ) Sort by Publication Company" << endl << endl

          << setw( 41 ) << "( Y ) Sort by Publication Year" << endl << endl
          
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,16);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'n':
		 case 'N':SortasName();break;
         
		 case 'i':
		 case 'I': SortasId();break;
         
		 case 't':
		 case 'T': SortasAuthor();break;
         
		 case 'c':
		 case 'C':SortasCategory();break;
         
		 case 'p':
		 case 'P':SortasPub.Com();break;
		 
		 case 'y':
		 case 'Y':SortasPub.Year();break;
		 
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Sortas();
		getch();
       }
}

************Sort in Desending Order***********

void Sortds(void)
{
	system("cls");
	   
	   cout <<setw( 27 )<< "In Sort Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 29 ) << "( N ) Sort by name" << endl << endl

          << setw( 27 ) << "( I ) Sort by Id" << endl << endl
          
          << setw( 36 ) << "( T ) Sort by author name" << endl << endl

          << setw( 33 ) << "( C ) Sort by Category" << endl << endl

          << setw( 44 ) << "( P ) Sort by Publication Company" << endl << endl

          << setw( 41 ) << "( Y ) Sort by Publication Year" << endl << endl
          
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,16);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'n':
		 case 'N':SortdsName();break;
         
		 case 'i':
		 case 'I': SortdsId();break;
         
		 case 't':
		 case 'T': SortdsAuthor();break;
         
		 case 'c':
		 case 'C':SortdsCategory();break;
         
		 case 'p':
		 case 'P':SortdsPub.Com();break;
		 
		 case 'y':
		 case 'Y':SortdsPub.Year();break;
		 
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Sortds();
		getch();
       }
}

***********Sort in Ascending order by Id************

void SortasId(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Id\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookid>books[j+1].bookid)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}
	
************Sort in Descending order by Id*************

void SortdsId(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Id\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookid<books[j+1].bookid)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***********Sort in Ascending order by Year**************

void SortasPub.Year(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Publishing Year\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookpubyear>books[j+1].bookpubyear)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}
	
************Sort in Descending order by Year*************

void SortdsPub.Year(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Publishing Year\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(books[j].bookpubyear<books[j+1].bookpubyear)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***********Sort in Ascending order by Name************

void SortasName(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Name\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookname,books[j+1].bookname)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

************Sort in Descending order by Name**************

void SortdsName(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Name\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookname,books[j+1].bookname)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***********Sort in Ascending order by Author**************

void SortasAuthor(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Author\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].authorname,books[j+1].authorname)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***********Sort in Descending order by Author*************

void SortdsAuthor(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Author\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].authorname,books[j+1].authorname)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

************Sort in Ascending order by Category***********

void SortasCategory(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Category\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookcategory,books[j+1].bookcategory)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***************Sort in Descending order by Category*****************

void SortdsCategory(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Category\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookcategory,books[j+1].bookcategory)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***************Sort in Ascending order by Company************

void SortasPub.Com(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Ascending Order by Publication Company\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookpubcom,books[j+1].bookpubcom)>0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

***********Sort in Descending order by Company**************

void SortdsPub.Com(void)
	{
		int i,j;
		book temp;
		system("cls");
		cout<<endl;
		cout<< "Sorting in Descending Order by Publication Company\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(books[j].bookpubcom,books[j+1].bookpubcom)<0)
				{
					temp = books[j];
					books[j]=books[j+1];
					books[j+1]=temp;	
				}
			}
		}
		Display();
	}

********************Delete************************
void Del(void)
	{
		system("cls");
	   
	   cout <<setw( 29 )<< "In Delete Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 31 ) << "( N ) Delete by name" << endl << endl

          << setw( 29 ) << "( I ) Delete by Id" << endl << endl
          
          << setw( 38 ) << "( T ) Delete by author name" << endl << endl

          << setw( 35 ) << "( C ) Delete by Category" << endl << endl

          << setw( 46 ) << "( P ) Delete by Publication Company" << endl << endl

          << setw( 43 ) << "( Y ) Delete by Publication Year" << endl << endl
          
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,16);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'n':
		 case 'N':DelByName();break;
         
		 case 'i':
		 case 'I': DelById();break;
         
		 case 't':
		 case 'T': DelByAuthor();break;
         
		 case 'c':
		 case 'C':DelByCategory();break;
         
		 case 'p':
		 case 'P':DelByPub.Com();break;
		 
		 case 'y':
		 case 'Y':DelByPub.Year();break;
		 
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Del();
		getch();
       }
	}

***************Delete by Name**********

void DelByName(void)
	{
		char name[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by name of book\n";
		cout<<"Enter the name of book you want to delete: ";
		gets(name);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookname,name)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

*********Delete by Author***************
	
void DelByAuthor(void)
	{
		char author[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by author of book\n";
		cout<<"Enter the author of book you want to delete: ";
		gets(author);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].authorname,author)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}	

*************Delete by Id**************

void DelById(void)
	{
		char ids[6];
		int id, loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by Id of book\n";
		cout<<"Enter the id of book you want to delete: ";
		gets(ids);
		id=atoi(ids);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookid==id)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
**************Delete by Category****************	
	
void DelByCategory(void)
	{
		char category[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by category of book\n";
		cout<<"Enter the category of book you want to delete: ";
		gets(category);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookcategory,category)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
**************Delete by Company*************
	
void DelByPub.Com(void)
	{
		char company[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by publication company of book\n";
		cout<<"Enter the publicaton company of book you want to delete: ";
		gets(company);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookpubcom,company)==0)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
************Delete by Year**************
	
void DelByPub.Year(void)
	{
		char year[4];
		int yr,loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Deleting by year of publication of book\n";
		cout<<"Enter the year of publication of book you want to delete: ";
		gets(year);
		yr=atoi(year);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookpubyear==yr)
			{
				loc=i;
				found = 1;
				for (i = loc;i<n-1;i++)
				{
					books[i]=books[i+1];
				}
				n--;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

*************Modify***************
void Modify(void)
	{
		system("cls");
	   
	   cout <<setw( 29 )<< "In Modify Function"<<endl
          << setw( 52 )<< "Please choose one of the options below: "

          << endl << setw( 71 )

          << "--------------------------------------------------------------"

          << endl << endl

          << setw( 31 ) << "( N ) Modify by name" << endl << endl

          << setw( 29 ) << "( I ) Modify by Id" << endl << endl
          
          << setw( 38 ) << "( T ) Modify by author name" << endl << endl

          << setw( 35 ) << "( C ) Modify by Category" << endl << endl

          << setw( 46 ) << "( P ) Modify by Publication Company" << endl << endl

          << setw( 43 ) << "( Y ) Modify by Publication Year" << endl << endl
          
		  <<setw( 32 ) << "Enter Option      [ ]" << endl << endl;
			Gotoxy(30,16);
		//	cin>>ch1;
	     
	   
	  
      
	   switch(getche())
	  //switch(ch1)
       {
         case 'n':
		 case 'N': ModifyByName();break;
         
		 case 'i':
		 case 'I': ModifyById();break;
         
		 case 't':
		 case 'T': ModifyByAuthor();break;
         
		 case 'c':
		 case 'C': ModifyByCategory();break;
         
		 case 'p':
		 case 'P': ModifyByPub.Com();break;
		 
		 case 'y':
		 case 'Y': ModifyByPub.Year();break;
		 
         default:
		puts("\n\n \t\tSelect only from the given menu.....\n\t\tPress enter to select again.....");
		getch();
		Modify();
		getch();
       }
	}

************Modify by Name*************

void ModifyByName(void)
	{
		char name[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by name of book\n";
		cout<<"Enter the name of book you want to modify: ";
		gets(name);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookname,name)==0)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Book Name: ";    
				gets(books[loc].bookname);
				//cin.getline(emp[n].name,40);
				//cin.ignore(40,'\n');
				cout<<"MODIFIED!"<<endl;
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
		}
	}
	
*************Modify by Author***********
	
void ModifyByAuthor(void)
	{
		char author[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by author of book\n";
		cout<<"Enter the author of book you want to modify: ";
		gets(author);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].authorname,author)==0)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Author Name: ";
				gets(books[loc].authorname);
				cout<<"MODIFIED!"<<endl;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}	

**********Modify by Id***************

void ModifyById(void)
	{
		char ids[6];
		int id, loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by Id of book\n";
		cout<<"Enter the id of book you want to modify: ";
		gets(ids);
		id=atoi(ids);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookid==id)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Book ID: ";
				gets(id1);
				books[loc].bookid=atoi(id1);
				//cin.ignore();
				cout<<"MODIFIED!"<<endl;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}
	
***********Modify by Category***********

void ModifyByCategory(void)
	{
		char category[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by category of book\n";
		cout<<"Enter the category of book you want to modify: ";
		gets(category);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookcategory,category)==0)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Book Category: ";
				gets(books[loc].bookcategory);
				cout<<"MODIFIED!"<<endl;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

************Modify by Company*************
	
void ModifyByPub.Com(void)
	{
		char company[60];
		int loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by publication company of book\n";
		cout<<"Enter the publicaton company of book you want to modify: ";
		gets(company);
		for(int i = 0;i<n;i++)
		{
			if(strcmp(books[i].bookpubcom,company)==0)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Publication Company Name: ";
				gets(books[loc].bookpubcom);
				cout<<"MODIFIED!"<<endl;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

***********Modify by Year**********
	
void ModifyByPub.Year(void)
	{
		char year[4];
		int yr,loc,found=0;
		system("cls");
		cout<<endl;
		cout<<"Modifying by year of publication of book\n";
		cout<<"Enter the year of publication of book you want to modify: ";
		gets(year);
		yr=atoi(year);
		for(int i = 0;i<n;i++)
		{
			if(books[i].bookpubyear==yr)
			{
				loc=i;
				found = 1;
				char ch;char id1[6],year[4];
				system("cls");
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<"\"Book ID\""<<setw(50)<<"\"Book Name\""<<setw(30)<<"\"Author Name\""<<setw(30)<<"\"Category\""<<setw(30)<<"\"Publication\""<<setw(30)<<"\"Month of Publication\""<<setw(30)<<"\"Year of Publication\""<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;
				cout<<setw(10)<<books[loc].bookid<<setw(50)<<books[loc].bookname<<setw(30)<<books[loc].authorname<<setw(30)<<books[loc].bookcategory<<setw(30)<<books[loc].bookpubcom<<setw(30)<<books[loc].bookpubmonth<<setw(30)<<books[loc].bookpubyear<<endl;
				cout<<"__________"<<"__________________________________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<"______________________________"<<endl;	
				cout<<endl;
				cout<< "In Modify function\n";
				cout<<"Enter new Publication Year: ";
				gets(year);
				books[loc].bookpubyear=atoi(year);
				cout<<"MODIFIED!"<<endl;
			}
		}
		if(found == 0)
			cout<<"Record not Found"<<endl;
		cout<<"Press enter to goto main manu.....";
		getch();
	}

*************Gotoxy******************* 
void Gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
**********************************************
