/*WAP to create a function getdata() which contains the details of Vehical as vehical number,Vehical 
name,Average and fuel capacity. Display those vehicals which has avg>=15 km and fuel capacity is 
greater than 10 ltrs.*/

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
 class vehical
 {
     public:
     int vehical_no;
     char vehical_name[20];
     int avg;
     int fuel_cap;

     void getdata(int vehical_no,char vehical_name[],int avg,int fuel_cap)
     {
         this->vehical_no=vehical_no;
         strcpy(this->vehical_name,vehical_name);
         this->avg=avg;
         this->fuel_cap=fuel_cap;
     }
     void display()
 {
     cout<<"\n"<<setw(10)<<this->vehical_no<<setw(20)<<this->vehical_name<<setw(10)<<this->avg<<setw(10)<<this->fuel_cap;
 }

 };
 void findByAvgFuelCap(vehical v[]);
int main()
{
    vehical v1,v2,v3;
    v1.getdata(5103,"Maruti Alto",23,11);
    v2.getdata(4865,"ford Ecosport",20,15);
    v3.getdata(3153,"Tata Tiago",14,9);



    v1.display();
    v2.display();
    v3.display();
    vehical v[]={v1,v2,v3};
   findByAvgFuelCap(v);
   
    
    return 0;
}
 void findByAvgFuelCap(vehical v[])
 {   cout<<"\n  vehicals which has avg>=15 km and fuel capacity is greater than 10 ltrs. \n :";
     for(int i=0;i<3;i++)
     {
         if(v[i].avg>15 && v[i].fuel_cap>10)
        v[i].display();

     }
     
 }