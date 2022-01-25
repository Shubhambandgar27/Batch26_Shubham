/*WAP to create a class Customer and input Customer Id, name and City. Entry 5 Customers and 
display the details [Array of Objects]*/

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class customer
{
    public:
    int cust_id;
    char Name[20];
    char city[10];
     
     void addCustomer(int cust_id,char Name[],char city[])
     {
          this->cust_id=cust_id;
          strcpy(this->Name,Name);
          strcpy(this->city,city);
     }
     void display()
     {
         cout<<"\n"<<setw(10)<<this->cust_id<<setw(15)<<this->Name<<setw(15)<<this->city;
     }


};
int main()
{
    customer c[5];
    c[0].addCustomer(101,"Shubham","Kolhapur");
    c[1].addCustomer(102,"Vyaktesh","Ichalkranji");
    c[2].addCustomer(103,"Prashant","Sangli");
    c[3].addCustomer(104,"sam","pune");
    c[4].addCustomer(105,"Smith","Mumbai");
    for(int i=0;i<5;i++)
    {
        c[i].display();
    }

    return 0;
}
