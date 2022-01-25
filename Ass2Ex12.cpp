/* WAP to declare a class Hardware. Input hardware name and Price. Pass the Object to a function 
showHardware() and display the Details [Passing Object as Function Argument] */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class Hardware
{
    public:
    char name[20];
    int price;

    void getHardware(char name[],int price)
    {
        strcpy(this->name,name);
        this->price=price;
    }
    
};

void showHardware(Hardware x);

int main()
{
    int price;
    char name[20];
    cout<<"\n Enter the name of the hardware:";
    cin>>name;
    cout<<"\n Enter the price of hardware:";
    cin>>price;
    Hardware h1;
    h1.getHardware(name,price);

    showHardware(h1);
    return 0;
}
 void showHardware(Hardware x)
    {
        cout<<"\n Given Hardware :";
        cout<<setw(15)<<x.name<<setw(15)<<x.price;
    }
