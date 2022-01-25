//WAP to declare a class Temperature and display Temperature in Centigrade and Fahrenheit.

#include<iostream>

using namespace std;
class temperature
{
    public:
     int temp1;
     float  temp2;

     void getTemp(int temp1,float temp2)
     {
         this->temp1=temp1;
         this->temp2=temp2;
     }
     void display()
     {
         cout<<"\n temperature in centigrade :"<<this->temp1<<"\n Temperature in fahrenheit :"<<this->temp2;
     }

};
int main()
{
    int temp1;
    float temp2;


    cout<<"\n Enter the temperature centigrade :";
    cin>>temp1;
    temp2= (temp1*(9/5)) + 32;
    temperature t1;
    t1.getTemp(temp1,temp2);
    t1.display();
    return 0;
}