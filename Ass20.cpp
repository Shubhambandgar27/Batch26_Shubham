/* WAP to create a class temperature with member fuctions gettemp1() which accepts the temprature in 
fahreinheit and converts it to centigrade and another function gettemp2() which accepts the 
temperature in centigrade and converts it to fahreinheit.Display the temperature in both units using 
display() function. */

#include<iostream>

using namespace std;
class temperature
{
  public:
   float fah;
   float centi;

   void gettemp1(float fah)
   {
       centi=(fah-32)*5/9;
   }
   void gettemp2(float centi)
   {
       fah=(centi * 1.8)+32;
   }
   void display()
   {  
        cout<<"\n temperature in centigrade="<<centi;
       cout<<"\n temperature in fahreinheit="<<fah;
      
   }
};

int main()
{   float fah,centi;
     cout<<"\n Enter temp[erature in fahreinheit :";
     cin>>fah;
     cout<<"\n Enter temperature in centigrade :";
     cin>>centi;
    temperature t1;
    t1.gettemp1(fah);
    t1.gettemp2(centi);

    t1.display();
    

    return 0;
}