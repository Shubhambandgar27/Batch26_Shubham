/* Create a class SBIBank. The Account holder wants to open FD type Account. In which The 
number of years and Amount is passed through argument in the function openFDaccount(). 
Input Account number in the format (SBI00XXXX) where X is the pin value of account holder and 
also input name of account older. [note : no. of years not compulsory it is by default 5 years] */

#include<iostream>
#include<string.h>

using namespace std;
class SBIBank
{
   public:
   int yrs=5;
   int amnt;
   int acc_no;
   char Name[20];

   void openFDaccount(int yrs,int amnt,int acc_no,char Name[])
   {
         this->yrs=yrs;
         this->amnt=amnt;
         this->acc_no=acc_no;
         strcpy(this->Name,Name);
   }
   void display()
   {
       cout<<this->yrs<<"\t"<<this->amnt<<"\t"<<"\t SBI000"<<this->acc_no<<"\t"<<this->Name;
       cout<<"\n FD Account Opened Succesfully !!!";
   }
};
int main()
{   
    int acc_no,yrs;
    char Name[20];

    cout<<"\n Enter Account number :SBI000";
    cin>>acc_no;

    cout<<"\n Enter  Account Holder Name : ";
    cin>>Name;
    cout<<"\n Enter the number of years :";
    cin>>yrs;

    SBIBank b1;
    b1.openFDaccount(yrs,200000,acc_no,Name);
    b1.display();

    return 0;
}