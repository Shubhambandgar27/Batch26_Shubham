/* WAP to declare a class Enquiry and input Enqno, Date, Name of person, City and contact number. 
Input 3 Entries and display the details. The Program can also useful to find the Enquiry from particular City. */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class Enquiry
{
    public:
    int enqno;
    long long cntno;
    char name[20],city[20],date[10];

    void getinfo(int enqno,char date[],char name[],char city[],long long cntno)
    {
        this->enqno=enqno;
        strcpy(this->date,date);
        strcpy(this->name,name);
        strcpy(this->city,city);
        this->cntno=cntno;
    }

    void show()
    {
        cout<<"\n  "<<this->enqno<<setw(7)<<this->date<<setw(10)<<this->name<<setw(15)<<this->city<<setw(15)<<this->cntno;
    }


};

Enquiry findByCity(Enquiry x,Enquiry y,Enquiry z);

int main()
{
    Enquiry e1,e2,e3;
    e1.getinfo(101,"27Aug","Shubham","kolhapur",9665457315);
    e2.getinfo(102,"06Aug","Prashant","sangli",9234567890);
    e3.getinfo(103,"05Dec","Vyanktesh","Ichalkaranji",9876543210);

    e1.show();
    e2.show();
    e3.show();
    
    Enquiry m = findByCity(e1,e2,e3);
    cout<<"\n Details from given City :"; 
    m.show();

    return 0;

}
 Enquiry findByCity(Enquiry x,Enquiry y,Enquiry z)
 {
     char UserCity[20];
   cout<<"\n Enter the name of the city for Enquiry:";
   cin>>UserCity;

   if(stricmp(UserCity,x.name)==0)
   return x;
   else if(stricmp(UserCity,y.name)==0)
   return y;
   else if(stricmp(UserCity,z.name)==0)
   return z;

 }