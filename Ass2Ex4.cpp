//WAP to input Distance between the Cities in Km and Convert it into Meter,Centimeter,Feet and Inches.

#include<iostream>

using namespace std;

int ConvertIntoM(int x)
{
    return (x*1000);
}
int ConvertIntoCm(int x)
{
   return (x*100000);
}
float  ConvertIntoFt(float x)
{
   return (x*3280.8);
}
float  ConvertIntoInc(float x)
{
    return (x*39370.079);
}

int main()
{
    int dist;

    cout<<"\n Enter Distance between two Cities in KM : ";
    cin>>dist;

   int mtr = ConvertIntoM(dist);
   cout<<"\n The Distance in Meter :"<<mtr;

    int cm = ConvertIntoCm(dist);
    cout<<"\n The Distance in centimeter : "<<cm;

   float ft = ConvertIntoFt(dist);
   cout<<"\n The Distance in Feet : "<<ft;

   float inc = ConvertIntoInc(dist);
   cout<<"\n The Distance in inches  : "<<inc;
     return 0;
}