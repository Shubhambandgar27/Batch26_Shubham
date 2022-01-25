/*Write a Menu Driven Program to edit Bank Account.
Menu
1.Open Account 2. View Account 3. deposit Amount 4. Withdraw Amount  5. View Balance 6. Search Account 7. Exit */

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;
class Bank
{
    public:
    int acNo;
    char name[20];
    int balance=100000;

    void showAccnt(int acNo,char name[],int balance)
    {
        this->acNo=acNo;
        strcpy(this->name,name);
        this->balance=balance;
        cout<<"\n SBI000"<<this->acNo<<"\t"<<this->name<<"\t"<<this->balance;
    }
    void addAmount(int acNo,char name[],int balance)
    {
        int deposit;
        cout<<"\n Enter amount. to deposit . ";
        cin>>deposit;
        this->acNo=acNo;
        strcpy(this->name,name);
        this->balance=balance+deposit;
        cout<<"\n SBI000"<<this->acNo<<"\t"<<this->name<<"\t"<<this->balance;
         
    }
    void withdrawAmount(int acNo,char name[],int balance)
    {
        int withdraw;
        cout<<"\n Enter withdraw amount.. ";
        cin>>withdraw;
        this->acNo=acNo;
        strcpy(this->name,name);
        this->balance=balance-withdraw;
        cout<<"\n SBI000"<<this->acNo<<"\t"<<this->name<<"\t"<<this->balance;
         
    }
    void openAccnt()
    {
        cout<<"\n You  select option to Open Account...";
        cout<<"\n Enter account number.. ";
        cin>>acNo;
        cout<<"\n Enter custmer name : ";
        cin>>name;
        cout<<"\n Add balance :";
        cin>>balance;
        cout<<"\n Your Account Opened succesfully !!";
    }
    
  int searchByAccNo(int Accno)
    {
        int Accnts[]={2011,2012,2013,2014,2015};
        for(int i=0;i<5;i++)
        {
            if(Accno==Accnts[i])
            return 2;
           
        }
        
    }
    
};


int main()
{
   
    cout<<"\n 1.Open Account.";
    cout<<"\n 2.View Account.";
    cout<<"\n 3.Deposit Amount.";
    cout<<"\n 4.Withdraw Amount.";
    cout<<"\n 5.view Balance.";
    cout<<"\n 6.Search Account.";
    cout<<"\n 7.Exit..";
    
    int choice;
    cout<<"\n Enter choice number :";
    cin>>choice;
    Bank b1;
    switch(choice)
    {
        case 1:
             b1.openAccnt();
             break;
        case 2:
             cout<<"\n You select option to view account !! ";
             int accno;
             cout<<"\n Enter the accont no.:";
             cin>>accno;
             b1.showAccnt(accno,"Smith",120000);
             break;   
        case 3:
             cout<<"\n You select option to Deposit Amount!!";
             b1.addAmount(2703,"Smith",120000);
             break;
        case 4:
            cout<<"\n You select option to Withdraw account !!";
             b1.withdrawAmount(2703,"Smith",120000);
             break;
        case 5:
            cout<<"\n You selected option to view balance!!";
            
            cout<<"\n Total Balnce :"<<b1.balance;
            break;
        case 6:
            cout<<"\n You Select option to search Account !!";
            int Accno,ans;
            cout<<"\n Enter Account number to search :";
            cin>>Accno;
            ans= b1.searchByAccNo(Accno);
           if(ans==2)
           cout<<"\n Account is Exist !!";
           else
            cout<<"\n Account is not Exist !!";
             break;
        case 7:
            cout<<"\n Exit !!";
            Sleep(2000);
            system("cls");
            break;
          default:
             cout<<"\n Invalid Choice !!!";
             break;
            }
            ;
    
    return 0;
}
