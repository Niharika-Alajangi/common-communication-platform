#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//Workshop BACKEND
/*Here the faculty is entering details of the workshop*/
void fac_workshop()
{
  int nume=0;
  string enter="y";
  while(enter=="y")
  {
    nume++;
    fstream file;
    file.open("workshop.txt",ios::app);
    string name,date,department,sp,ven;
    cout<<"Enter the name of the workshop : ";
    getline(cin, name);
    getline(cin, name);
    cout<<"Enter the date of the workshop : ";
    getline(cin, date);
    cout<<"Enter the department organizing the workshop : ";
    getline(cin, department);
    cout<<"Enter the Speaker of the workshop : ";
    getline(cin, sp);
    cout<<"Enter the venue of the workshop : ";
    getline(cin, ven);
    file<<name<<","<<date<<","<<department<<","<<sp<<","<<ven<<"\n";
    cout<<"Would you like to create another workshop?(y/n)"<<endl;//Y is used to create more than one workshops
    getline(cin, enter);

    file.close();
  }

}
//Here the student can view the upcoming club activities from the student block
int student_event()
{
    char pause;
    string eventname,date,clubname,fblink,instalink,whatsapplink;
    system("cls");
    fstream file1;
    file1.open("events.txt");

    string str;

    cout<<"\n\n\t~Upcoming Club Activities~\n\n";

    while(getline(file1,eventname,','))
    {
        getline(file1,date,',');
        getline(file1,clubname,',');
        getline(file1,fblink,',');
        getline(file1,instalink,',');
        getline(file1,whatsapplink,'\n');
        cout<<"Name of event : "<<eventname<<endl;
        cout<<"Date : "<<date<<endl;
        cout<<"Club Organizing : "<<clubname<<endl;
        cout<<"Facebook Link : "<<fblink<<endl;
        cout<<"Instagram Link : "<<instalink<<endl;
        cout<<"Whatsapp group Link : "<<whatsapplink<<endl;
        cout<<endl;
    }

    cout<<"\n\n Enter a key to continue : ";
    cin>>pause;

    return 0;
}

//Events BACKEND
/*Here the faculty is entering details of the workshop*/
void fac_event()
{
  int i=0;
  string enter="y";
  while(enter=="y")
  {
    fstream file;
    file.open("events.txt",ios::app);
    string name_o_e,date;
    string insta,fb,whatsapp,club;
    cout<<"HELLO! YOU ARE ALL SET TO CREATE AN EVENT \n";
    cout<<"Enter the name of the event \n";
    getline(cin,name_o_e);
    getline(cin,name_o_e);
    cout<<"Enter the date of the event \n";
    getline(cin,date);
    cout<<"Enter the club \n";
    getline(cin,club);
    cout<<"Enter the social media links for the event \n";
    cout<<"FB"<<endl;
    getline(cin,fb);
    cout<<"INSTAGRAM"<<endl;
    getline(cin,insta);
    cout<<"Whatsapp group link"<<endl;
    getline(cin,whatsapp);

    file<<name_o_e<<","<<date<<","<<club<<","<<insta<<","<<fb<<","<<whatsapp<<"\n";
    cout<<"Would you like to create another event?(y/n)"<<endl;
    getline(cin,enter);
    file.close();
  }

}

//The fields under construction denote the functions we would like to encorporate in our program
int under_construction()
{
    char pause;
    system("cls");
    cout<<"\n\n\t\t~~UNDER CONSTRUCTION~~";
    cout<<"\n\n Enter any key to continue : ";
    cin>>pause;

    return 0;
}

//Depicts the bulletin board and various fields in it
int board()
{
    char pause;
    system("cls");

    cout<<"\n\n\t ~~Bulletin Board~~";
    cout<<"\n\n Exam Time Table";
    cout<<"\n\n Attendace - Ineligibility List";
    cout<<"\n\n Achievements";
    cout<<"\n\n Placement Results";
    cout<<"\n\n VTU Circular/Notice";
    cout<<"\n\n Enter any key to coninue : ";
    cin>>pause;
    return 0;
}

//FRONTEND OF WORKSHOP~Student access
int workshop()
{
    char pause;
    string name,date,dep,sp,ven;
    system("cls");
    fstream file1;
    file1.open("workshop.txt");

    string str;

    cout<<"\n\n\t~~Upcoming Workshops~~\n\n";

    while(getline(file1,name,','))
    {

        getline(file1,date,',');
        getline(file1,dep,',');
        getline(file1,sp,',');
        getline(file1,ven,'\n');
        cout<<"Name : "<<name<<endl;
        cout<<"Date : "<<date<<endl;
        cout<<"Department Organizing : "<<dep<<endl;
        cout<<"Speaker : "<<sp<<endl;
        cout<<"Venue : "<<ven<<endl;
        cout<<endl;
    }

    cout<<"\n\n Enter a key to continue : ";
    cin>>pause;

    return 0;
}

//LOGIN PAGE FOR THE FACULTY MEMBERS
int faculty_page(char msg[])
{
    char choice;
    system("cls");
    cout<<"\n\t~Faculty Home Page~";
    cout<<"\n\n 1)Workshop";
    cout<<"\n\n 2)Club Activities";
    cout<<"\n\n 3)Hackathons";
    cout<<"\n\n 4)Fests";
    cout<<"\n\n 5)Messages - "<<msg;
    cout<<"\n\n 6)Bulleting Board";
    cout<<"\n\n 7)Exit";
    cout<<"\n\n Enter your choice : ";
    scanf(" %c",&choice);
    switch(choice)
    {
        case '1':fac_workshop();
               break;
        case '2':fac_event();
               break;
        case '3': under_construction();
                break;
        case '4': under_construction();
                break;
        case '5': under_construction();
                break;
        case '6': board();
                break;
        case '7':exit(0);

      deafault: cout<<"wrong input \n";
    }
    system("cls");
    faculty_page(msg);
    return 0;


    return 0;
}

//Students can view their attendance through the student block
int attendance(char att[])
{
    system("cls");
    char a;
    cout<<"\n Your Attendance is : "<<att<<"%";
    cout<<"\n\n Enter a key to continue : ";
    cin>>a;
    return 0;
}

//STUDENT LOGIN PAGE
int student_page(char att[],char msg[])
{
    char choice;
    system("cls");
    cout<<"\n\t~~Student Home Page~~";
    cout<<"\n\n 1)Workshop";
    cout<<"\n\n 2)Club Activities";
    cout<<"\n\n 3)Attendance";
    cout<<"\n\n 4)Hackathons";
    cout<<"\n\n 5)Fests";
    cout<<"\n\n 6)Messages - "<<msg;
    cout<<"\n\n 7)Bulletin Board";
    cout<<"\n\n 8)Exit";
    cout<<"\n\n Enter your choice : ";
    scanf(" %c",&choice);

    switch(choice)
    {
        case '1': workshop();
                break;

        case '2': student_event();
                break;

        case '3': attendance(att);
                break;

        case '4': under_construction();
                break;

        case '5': under_construction();
                break;
        case '6': under_construction();
                break;
        case '7': board();
                break;
        case '8': exit(0);
                break;
        default : system("cls");
    }
    system("cls");
    student_page(att,msg);
    return 0;
}

//FACULTY LOGIN PAGE
int faculty_login ()
{

    char name[50],pass[50],usn[50],p1[50],msg[50];
    cout<<"\n Enter username : ";
    cin>>usn;
    cout<<"\n Enter password : ";
    cin>>p1;

    fstream file;
    file.open("FacultyData.txt");
    while(file>>name>>pass>>msg)
    {
        if(((strcmp(name,usn)==0)&&(strcmp(pass,p1)==0)))
            faculty_page(msg);

    }

   return 0;
}



int student_login ()
{

    char name[50],pass[50],usn[50],p1[50],att[50],msg[50];
    cout<<"\n Enter username : ";
    cin>>usn;
    cout<<"\n Enter password : ";
    cin>>p1;

    fstream file;
    file.open("StudentData.txt");
    while(file>>name>>pass>>att>>msg)
    {
        if(((strcmp(name,usn)==0)&&(strcmp(pass,p1)==0)))
            student_page(att,msg);
    }


   return 0;
}

int main()
{
    char login;
    system("cls");
    cout<<"\n -----------------------------";
    cout<<"\t\t -----------------------------";
    cout<<"\n | Press 1 for Student Login |";
    cout<<"\t\t | Press 2 for Faculty Login |";
    cout<<"\n -----------------------------";
    cout<<"\t\t -----------------------------";
    cout<<"\n\n Enter your choice : ";
    cin>>login;
    if(login=='1')
        student_login();
    else if(login=='2')
        faculty_login();
    else
        main();
    cout<<"\n\n Invalid Username\n\n";
    cout<<" EXITING...\n\n";
    exit(0);
    return 0;
}
