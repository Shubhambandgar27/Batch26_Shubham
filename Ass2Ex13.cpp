/* WAP to declare two classes Shoppe and Customer. Input Name and Location of Shoppe, Name 
and Contact number of Customer. Display the details of Shop and Customer using a Function 
with object as Function Argument. */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class shoppe
{
    public:
    char shop_name[20];
    char location[20];

    void addShop(char shop_name[],char location[])
    {
        strcpy(this->shop_name,shop_name);
        strcpy(this->location,location);
    }
    
};
class customer
{
    public:
    char cust_name[20];
    long long cntno;

    void addcustomer(char cust_name[],long long cntno)
    {
        strcpy(this->cust_name,cust_name);
        this->cntno=cntno;
    }
     
};
void showShopDetails(shoppe x);
void showCustDetails(customer y);
int main()
{
    char shop_name[20],location[20],cust_name[20];
    long long cntno;
    cout<<"\n Enter the Name of shop :";
    cin>>shop_name;
    cout<<"\n Enter the Loaction of shop :";
    cin>>location;
    cout<<"\n Enter the name of customer :";
    cin>>cust_name;
    cout<<"\n Enter the contact numaber of customer :";
    cin>>cntno;
    shoppe s1;
     s1.addShop(shop_name,location);
     showShopDetails(s1);
    customer c1;
    c1.addcustomer(cust_name,cntno);
     showCustDetails(c1);
    return 0;;

}
void showShopDetails(shoppe x)
     {
        cout<<"\n "<<setw(10)<<x.shop_name<<setw(10)<<x.location;
     }

void showCustDetails(customer y)
      {
        cout<<setw(15)<<y.cust_name<<setw(20)<<y.cntno;
     }
