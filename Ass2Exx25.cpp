/* WAP to declare a Base class BloodBank and input Name of Blood Bank, Location, and Contact
Details. Derive a class as Patient which access the Data from Blood bank publically. Input and 
Display the details of Patient and Blood Bank [Perform Single Level Inheritance */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class BloodBank
{
    public:
    char name[20];
    char loc[20];
    long long cntno;
    char Name[20];
    
    void getinfo(char name[],char loc[],long long cntno,char Name[])
    {
        strcpy(this->name,name);
        strcpy(this->loc,loc);
        this->cntno=cntno;
        strcpy(this->Name,Name);
     }
    


};
class Patient:public BloodBank
{
    public:
   
    
    void show()
    {
        cout<<"\n "<<setw(10)<<this->name<<setw(10)<<this->loc<<setw(15)<<this->cntno<<setw(10)<<this->Name;
    }

};
int main()
{
   BloodBank b1;
   
   Patient p1; 
     p1.getinfo("Help","Sangli",9876543210,"Shubham");
   p1.show();
    return 0;
}
