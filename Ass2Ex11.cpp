/* WAP to declare a class Accessories. Input accno, name ,price ,warranty in months and display 
using the function viewAccessories(). Input 3 different accessories and apply discount of 5% */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class Accessories
{
    public:
    int Accno;
    char name[20];
    int price;
    int wnt;

    void addAccessories(int Accno,char name[],int price,int wnt)
    {
        this->Accno=Accno;
        strcpy(this->name,name);
        this->price=price;
        this->wnt=wnt;
    }
    void viewAccessories()
    {
        cout<<"\n"<<this->Accno<<setw(10)<<this->name<<setw(10)<<this->price<<setw(5)<<this->wnt;
    }

};
void discount(Accessories x,Accessories y,Accessories z);
int main()
{
    int accno1,accno2,accno3;
    char name1[20],name2[20],name3[20];
    int prs1,prs2,prs3;
    int wnt1,wnt2,wnt3;
    cout<<"\n Enter first account number :";
    cin>>accno1;
    cout<<"\n Enter first Name:";
    cin>>name1;
    cout<<"\n Enter price of first Accessorie :";
    cin>>prs1;
    cout<<"\n Enter first warranties :";
    cin>>wnt1;

     cout<<"\n Enter2nd account number :";
     cin>>accno2;
    cout<<"\n Enter 2nd Name:";
    cin>>name2;
    cout<<"\n Enter price of 2nd Accessorie :";
    cin>>prs2;
    cout<<"\n Enter 2nd warranties :";
    cin>>wnt2;

    
    cout<<"\n Enter 3rd account number :";
    cin>>accno3;
    cout<<"\n Enter 3rd Name:";
    cin>>name3;
    cout<<"\n Enter price of 3rd Accessorie :";
    cin>>prs3;
    cout<<"\n Enter 3rd warranties :";
    cin>>wnt3;
    Accessories a1,a2,a3;
     a1.addAccessories(accno1,name1,prs1,wnt1);
     a2.addAccessories(accno2,name2,prs2,wnt2);
     a3.addAccessories(accno3,name3,prs3,wnt3);

     a1.viewAccessories();
     a2.viewAccessories();
     a3.viewAccessories();   

     discount(a1,a2,a3);
    return 0;
}
 void discount(Accessories x,Accessories y,Accessories z)
 {
     x.price = x.price - x.price*0.05;
     cout<<"\n price of "<<x.name<<" with Discount of 5% :"<<x.price;
     y.price = y.price - y.price*0.05;
     cout<<"\n price of "<< y.name<< " with Discount of 5% :"<<y.price;
     z.price = z.price - z.price*0.05;
     cout<<"\n price of "<<z.name<<" with Discount of 5% :"<<z.price;

 }