/* WAP to declare a constructor class as BookShop. Input Shop Name, Book types and Qtys. Display them using a function */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class Bookshop
{
    public:
    char name[20];
    char type[20];
    int qyt;

    Bookshop(char name[],char type[],int qyt)
    {
       strcpy (this->name,name);
       strcpy(this->type,type);
       this->qyt=qyt;
    }
    void show()
    {
        cout<<"\n "<<this->name<<setw(15)<<this->type<<setw(10)<<this->qyt;
    }

};
int main()
{
    Bookshop b1("SHREE","Story Books",100);
    Bookshop b2("SHREE","Biography",60);
    Bookshop b3("SHREE","Textbook",30);

    b1.show();
    b2.show();
    b3.show();
    return 0;

}
