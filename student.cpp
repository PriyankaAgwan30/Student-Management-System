#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class college
{
	 public:
	 double n,rn,s,en,yr;
	char name[20],add[20];
	void getdata();
	void display();
	void view();

};
void college::getdata()
	{
	ofstream f1("student.txt");
          cout<<"\n How many records you want to insert: ";
          cin>>n;
	 for(int i=0;i<2;i++)
	  {
		cout<<"\n\t\tEnter Name of Student:-";
		cin>>name;
		cout<<"\n\t\tEnter Address of Student:-";
		cin>>add;
		cout<<"\n\t\tEnter Enrollment Number of Student:-";
		cin>>en;
		cout<<"\n\t\tEnter Roll_No of Student:-";
		cin>>rn;
		cout<<"\n\t\tEnter Year(1/2/3) of Student:-";
		cin>>yr;
	
    f1<<name<<"\n"<<add<<"\n"<<en<<"\n"<<rn<<"\n"<<yr<<"\n";
	   }
	f1.close();
	}
void college::display()
{
       ifstream f11("student.txt") ;
       cout<<"\n Record Inserted Successfully \n";
       cout<<"\n Enter Roll_No You want to search";
       cin>>s;
       do
       {
       f11>>name;
       f11>>add;
       f11>>en;
       f11>>rn;
       f11>>yr;
       }while(s!=rn);
       cout<<"\n Details of Student is shown below:-";
       cout<<"\n\t\tName of Student:-"<<name;
       cout<<"\n\t\tAddress of Student:-"<<add;
       cout<<"\n\t\tEnrollment Number of Student:-"<<en;
       cout<<"\n\t\tRoll_No of Student:-"<<rn;
       cout<<"\n\t\tYear(1/2/3) of Student:-"<<yr;

       f11.close();
}
void college::view()
{      
  ifstream f11("student.txt") ;

       f11>>name;
       f11>>add;
       f11>>en;
       f11>>rn;
       f11>>yr;

       cout<<"\n Details of Student is shown below:-";
       cout<<"\n\t\tName of Student:-"<<name;
       cout<<"\n\t\tAddress of Student:-"<<add;
       cout<<"\n\t\tEnrollment Number of Student:-"<<en;
       cout<<"\n\t\tRoll_No of Student:-"<<rn;
       cout<<"\n\t\tYear(1/2/3) of Student:-"<<yr;


       f11.close();
}
main()
{
	clrscr();
	college c1;
	int ch;
	cout<<"**Sanjivani K.B.P.Polytechnic,Kopargaon***\n";
	cout<<"*** Department of Information Technology****\n";
	cout<<"***   Student Record Database System  ****\n";

          do
          {
	cout<<"Select Following Options Shown";
	cout<<"\n 1.Add Details student";
	cout<<"\n 2.Search Student";
	cout<<"\n 3.View All Students";
	cout<<"\n 4.Exit";
	cout<<"\n\n Enter Your Choice";
	cin>>ch;
	switch(ch)
	{
	case 1:
	c1.getdata();
	break;
	case 2:
	c1.display();
	break;
	case 3:
	c1.view();
	break;
	case 4:

	break;
	default:
	cout<<"\nWrong Choice";
	break;
	}
          cout<<"\n\n Do you want to continue (1): ";
          cin>>ch;
	}while(ch==1);
      getch();
      return 0;
}
