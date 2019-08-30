/// PROJECT NAME : RUET ADMISSION TEST HELPLINE ///
/// Course Name  :                              ///
/// Course Code  : CSE                          ///

/// Submitted by,                               ///
///         Name : KHONDAKAR FAHAD              ///
///         Roll : 143092                       ///
///         Dept.: CSE                          ///
///         sec  : B                            ///
///      session : 2014-2015                    ///
#include<iostream>
#include<windows.h>
#include<queue>
#include<fstream>
#include<iomanip>
#include <ctime>
#include<cstdlib>
using namespace std;
   class student
{
      public:
         int y;
         char name[90],board[90],ins[90];

         void getst()
            {
         cout<<endl<<"Enter candidate's name: ";
         cin>>name;
         cout<<endl<<"Year of passed HSC exam: ";
         cin>>y;
         cout<<endl<<"Candidate's Last institution: ";
         cin>>ins;
         cout<<endl<<"Passed board: ";
         cin>>board;
            }
        int merit_list(void);
        int app_form(void);
        int sub_choice(void);


};///END student class
class check:public student
{
      public:
         float p,c,e,m;

         void geta()
         {
          cout<<"Enter the GPA in physics: ";
          cin>>p;

          cout<<"Enter the GPA in chemistry: ";
          cin>>c;

          cout<<"Enter the GPA in math: ";
          cin>>m;

          cout<<"Enter the GPA in english: ";
          cin>>e;
         }///END geta()
         void verify()
         {
           float total=p+c+m+e;
            ofstream out("Student Information.doc",ios::app);
               if((p==5.00)&&(c==5)&&(m==5)&&(e==5)){
                    /*cout<<endl<<"Student's name: "<<name<<endl;
                     cout<<"Total GP: "<<total<<endl;
                     cout<<"CONGRATULATION"<<endl;
                     cout<<"You are qualified for RUET Admission Test...."<<endl;*/
                 MessageBox(NULL,name,"candidate view",MB_DEFAULT_DESKTOP_ONLY);
                 MessageBox(NULL,"CONGRATULATION\nYou are qualified for RUET Admission Test....","candidate view",MB_DEFAULT_DESKTOP_ONLY);
                 out<<endl<<"Student's name: "<<name<<endl;
                 out<<"Total GP: "<<total<<endl;
                 out<<"CONGRATULATION"<<endl;
                 out<<"You are qualified for RUET Admission Test...."<<endl;

                }
           else if(total>=18.50&&total<=20.00)
                  {
                   /*cout<<endl<<"Student's name: "<<name<<endl;
                     cout<<"Total GP: "<<total<<endl;
                     cout<<"CONGRATULATION"<<endl;
                     cout<<"You have some Probability for RUET Admission Test...."<<endl;
                     cout<<"checking update Admission Test Web site"<<endl;
                    cout<<"www.ruet.ac.bd \\admission_test_marks_info"<<endl;*/
                    MessageBox(NULL,name,"candidate view",MB_DEFAULT_DESKTOP_ONLY);
                    MessageBox(NULL,"You have some Probability for RUET Admission Test",
                               "candidate view",MB_DEFAULT_DESKTOP_ONLY);
                    MessageBox(NULL,"checking update Admission Test Web site",
                                "candidate view",MB_DEFAULT_DESKTOP_ONLY);
                   MessageBox(NULL,"www.ruet.ac.bd \\admission_test_marks_info",
                                "candidate view",MB_DEFAULT_DESKTOP_ONLY);
                    out<<endl<<"Student's name: "<<name<<endl;
                     out<<"Total GP: "<<total<<endl;
                     out<<"CONGRATULATION"<<endl;
                     out<<"You have some Probability for RUET Admission Test...."<<endl;
                     out<<"checking update Admission Test Web site"<<endl;
                    out<<"www.ruet.ac.bd \\admission_test_marks_info"<<endl;
                  }
                else if(total<18.50){
                /* cout<<endl<<"Student's name: "<<name<<endl;
                 cout<<"Total GP: "<<total<<endl;
                 cout<<"SORRY"<<endl;
                cout<<"You are not qualified for RUET Admission Test...."<<endl;*/
                 MessageBox(NULL,"sorry you are not qualified for RUET Admission test",
                                "candidate view",MB_DEFAULT_DESKTOP_ONLY);
                 out<<endl<<"Student's name: "<<name<<endl;
                 out<<"Total GP: "<<total<<endl;
                 out<<"SORRY"<<endl;
                out<<"You are not qualified for RUET Admission Test...."<<endl;
             }
             out.close();
    }///END verify()
};/// class check: public student
int student::merit_list(void)
{
    ofstream write;
    ifstream read;
    write.open("roll & position.doc");


    int d,i,flag=0,k=1,r;
    int n[1000];
srand((unsigned)time(0));
for(i=1;i<=400;i++){
   n[i]=rand()%3000;
  write<<i<<". "<<n[i]<< endl;
}
write.close();
read.open("roll & position.doc");
ofstream out;
while(k==1){
        cout<<endl<<endl<<"1.SEARCH your position "<<endl<<"2.EXIT from merit_list"<<endl;
        cin>>r;
        switch(r)
        {
            case 1:cout<<endl<<"Enter Your Roll:";
                      cin>>d;
                      for(i=1;i<=400;i++)
                       {

                       if(d==i){
                              cout<<"successful..."<<endl;
                              cout<<"your entered roll is "<<i<<endl;
                              cout<<"Your position is  "<<n[i]<<endl;
                            out<<"your entered roll is "<<i<<endl;
                            out<<"Your position is  "<<n[i]<<endl;
                            break;}
                        }
                      if(d!=i)
                             {
                             cout<<"sorry.."<<endl;
                             cout<<"your roll does not matching in the eligable merit list"<<endl;
                            cout<<"we can't find your position"<<endl;
                             }
                        break;
            default:
                k=2;break;

        }///END switch
    }///END while
};///END merit_list()
int student::app_form(void)
{
  char name[20],fname[20],mname[20],add[40],bloodg[2],nation[15];
    int pos,roll,mob,n,i;
        cout<<"          Welcome to RUET Online Admission Form"<<endl
        <<"            Please Fill up the form Currectly"<<endl<<endl;
        cout<<endl<<"Enter Your Full Name :";
        cin>>name;
        cout<<"Enter Your Father name :";
        cin>>fname;
        cout<<"Enter Your Mother name :";
        cin>>mname;
        cout<<"Enter Your permanent Address :";
        cin>>add;
        cout<<"Enter Your Nationality :";
        cin>>nation;
        cout<<"Enter Your Blood Group :";
        cin>>bloodg;
        cout<<"Enter Your possition :";
        cin>>pos;
        cout<<"Enter Your Roll :";
        cin>>roll;
        cout<<"Enter Your mobile No :";
        cin>>mob;
        /*cout<<endl<<endl<<"Enter Your choice of depertment :";
        char dept[4];
        cout<<endl<<"CSE"<<endl<<"EEE"<<endl<<"ME"<<endl<<"CE"<<endl
        <<"ETE"<<endl<<"MTE"<<endl<<"ECE"<<endl<<"CFE"<<endl
        <<"GCE"<<endl<<"URP"<<endl<<"ARCH"<<endl<<endl;
        cin>>dept;
        cout<<"Your are choosing :"<<dept<<endl;*/



        cout<<endl<<endl<<"Thank your for Fill up"<<endl
        <<"you must know your Depertment few days later"<<endl<<endl;

             ofstream out;
        out.open("form.doc",ios::app);
        out<<"Student Name :"<<name<<endl;
        out<<"Father Name :"<<fname<<endl;
        out<<"Mother Name :"<<mname<<endl;
        out<<"Address :"<<add<<endl;
        out<<"Natonality :"<<nation<<endl;
        out<<"Blooad Group:"<<bloodg<<endl;
        out<<"Admission Position :"<<pos<<endl;
        out<<"Admission Rool:"<<roll<<endl;
        out<<"Mobile Number :"<<mob<<endl<<endl;
        out.close();

};///END student::app_form()
int student::sub_choice(void)
{

    ofstream out;
    out.open("choice.doc",ios::app);
    int i,j,n=1,s=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0,r=0,p=0,students=0,pos,roll;
    char x,stor[6],m;
    char name[20],fname[20],mname[20],add[40];
    std::queue<char>q1;
    std::queue<char>q2;
    std::queue<char>q3;
    std::queue<char>q4;
    std::queue<char>q5;
    std::queue<char>q6;
    std::queue<char>q7;
    std::queue<char>q8;
    std::queue<char>q9;
    std::queue<char>q10;
    std::queue<char>q11;
    std::queue<char>q12;
    while(n==1)
    {
        cout<<"1.LOGIN FOR  SUBJECT CHOICE"<<endl<<"2.Exit"<<endl;
        cin>>n;
        switch(n){
            case 1: cout<<endl<<"Welcome to Ruet Admission Test Subject Choice"<<endl<<endl;
        cout<<endl<<"Enter Your Full Name :";
        cin>>name;
        cout<<"Enter Your Father name :";
        cin>>fname;
        cout<<"Enter Your Mother name :";
        cin>>mname;
        cout<<"Enter Your permanent Address :";
        cin>>add;
        cout<<"Enter Your possition :";
        cin>>pos;
        cout<<"Enter Your Roll :";
        cin>>roll;
        out<<endl<<"student name :"<<name<<endl;
        out<<"Father Name :"<<fname<<endl;
        out<<"Mother Name :"<<mname<<endl;
        out<<"Address :"<<add<<endl;
        out<<"Possition :"<<pos<<endl;
        out<<"Roll :"<<roll<<endl;
            cout<<"Enter Your Subject From below"<<endl<<endl<<
            "\tCSE"<<"  "<<"EEE"<<"  "<<"ME"<<"  "<<"CE"<<endl<<
            "\tETE"<<"  "<<"MTE"<<"  "<<"ECE"<<"  "<<"IPE"<<endl<<
            "\tCFE"<<"  "<<"GCE"<<"  "<<"URP"<<"  "<<"ARCH"<<endl;
            cout<<"You Must Given a Length From the Sub"<<endl;
            for(j=1;j<=12;j++){

    if(j==1){
        cout<<endl<<"length :";
        cin>>n;
        cout<<"your choice "<<j<<":";
     for(i=0;i<n;i++)
       {
        cin>>x;
        q1.push(x);

       }
        ++a;
    }
    if(j==2)
    { cout<<endl<<"length :";
    cin>>n;
      cout<<"your choice "<<j<<":";
        for(i=0;i<n;i++)
       {
          cin>>x;
          q2.push(x);


       }
       ++b;

    }
    if(j==3)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q3.push(x);
        }
        ++c;
      }
       if(j==4)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q4.push(x);
        }
        ++d;
      }
       if(j==5)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q5.push(x);
        }
        ++e;
      }
    if(j==6)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q6.push(x);
        }
        ++f;
      }
       if(j==7)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q7.push(x);
        }
        ++g;
      }
       if(j==8)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q8.push(x);
        }
        ++h;
         if(j==9)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q9.push(x);
        }
        ++k;
      }
       if(j==10)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q10.push(x);
        }
        ++l;
      }
       if(j==11)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q11.push(x);
        }
        ++r;
      }
       if(j==12)
    { cout<<endl<<"length :";
    cin>>n;
     cout<<"your choice "<<j<<":";
         for(i=0;i<n;i++)
        {
           cin>>x;
           q12.push(x);
        }
        ++p;
      }
      }

     }
     ++s;

            if(students>815)
        {
            cout<<"sorry..."<<endl;
        cout<<"No dept are avaiable for you"<<endl;
        cout<<"Thank you for query"<<endl;
        break;
        }
       if(s<=4)
       {
        cout<<endl<<"congrats";
        out<<"congrats"<<endl;
        cout<<endl<<"Your dept. is :";
        out<<"Your dept. is :"<<endl;
        while(!q1.empty())
        {
            std::cout<<q1.front();
            out<<q1.front();
            q1.pop();
        }
        cout<<endl;
        }
        if(s>=4)
        {
        cout<<endl<<"congrats";
        out<<"congrats"<<endl;
        cout<<endl<<"Your dept. is :";
        out<<"Your dept. is :";
        if(a<=4){
        while(!q2.empty())
        {
            std::cout<<q2.front();
            out<<q2.front();
            q2.pop();

        }
        cout<<endl;
        }
        else if(b<=4)
        {
            while(!q3.empty())
        {
            std::cout<<q3.front();
            q3.pop();
        }
        cout<<endl;
        }
        else if(c<=4)
        {
            while(!q4.empty())
        {
            std::cout<<q4.front();
            q4.pop();
        }
        cout<<endl;
        }
        else if(d<=4)
        {
            while(!q5.empty())
        {
            std::cout<<q5.front();
            q5.pop();
        }
        cout<<endl;
        }
        else if(e<=4)
        {
            while(!q6.empty())
        {
            std::cout<<q6.front();
            q6.pop();
        }
        cout<<endl;
        }
        else if(f<=4)
        {
            while(!q7.empty())
        {
            std::cout<<q7.front();
            q7.pop();
        }
        cout<<endl;
        }
        else if(g<=4)
        {
            while(!q8.empty())
        {
            std::cout<<q8.front();
            q8.pop();
        }
        cout<<endl;
        }
        else if(h<=4)
        {
            while(!q9.empty())
        {
            std::cout<<q9.front();
            q9.pop();
        }
        cout<<endl;
        }
        else if(k<=4)
        {
            while(!q10.empty())
        {
            std::cout<<q10.front();
            q10.pop();
        }
        cout<<endl;
        }
        else if(l<=4)
        {
            while(!q11.empty())
        {
            std::cout<<q11.front();
            q11.pop();
        }
        cout<<endl;
        }
        else if(r<=4)
        {
            while(!q12.empty())
        {
            std::cout<<q12.front();
            q12.pop();
        }
        cout<<endl;
        }

        }
        ++students;

        break;
        case 2:
            cout<<"Thank you For Logout"<<endl;
            n=2;
            break;
        }

    }
    out.close();
}///END  student::sub_choice

int main()
{
       check s;
       int index,j,allchk=1,c;
       while(allchk==1){
           cout<<endl<<"WELCOME TO RUET ADMISSION TEST ONLINE WEBSITE"<<endl
           <<"1.ABILITY FOR RUET ADMISSION TEST "<<endl<<"2.GET MERIT LIST"<<endl
           <<"3.APPLICATION FORM"<<endl<<"4.SUBJECT CHOICE"<<endl<<"5.EXIT"<<endl;
           cin>>c;
            switch(c){
           case 1:

                  do{
                       cout<<endl<<"\t RUET ADMISSION TEST\t"<<endl;
                       cout<<"_______________________________________________"<<endl<<endl;
                       cout<<"1.Get candidate's info in details."<<endl;
                       cout<<"2.View the status of candidates."<<endl;
                       cout<<"3.Exit.\nChoose your decision: ";
                       cin>>index;

                       switch(index)

                              {
                                case 1:s.getst();
                                       s.geta();
                                       break;

                                case 2:s.verify();
                                       break;

                                case 3:break;
                                default:
                                      cout<<"\aWrong choice...... Try again..\a";break;

                              }

                       }while(index!=3);
                        break;
            case 2:s.merit_list();break;
            case 3:s.app_form();break;
            case 4:s.sub_choice();break;
            default:allchk=2;break;
        }///END switch(main)
       }///END while(main)
}///END main()


