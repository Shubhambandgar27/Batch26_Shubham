//WAP to input two numbers and display their Arithmetical Operations.

#include<iostream>
 using namespace std;
 int additionOfNum(int x,int y)
 {
     return (x+y);
 }
 int subtractionOfNum(int x,int y)
 {
     return (x-y);
 }
 int multiplicationOfNum(int x,int y)
 {
     return (x*y);
 }
 float divisionOfNum(float x,float y)
 {
     return (x/y);
 }

 int main()
 {
     int n1,n2;
     cout<<"\n Enter two numbers n1 & n2 : ";
     cin>>n1>>n2;

     int sum = additionOfNum(n1,n2);
      cout<<"\n Addition = "<<sum;

     int sub = subtractionOfNum(n1,n2);
      cout<<"\n substraction = "<<sub;

     int mult =  multiplicationOfNum(n1,n2);
      cout<<"\n Multiplication = "<<mult;

     float div = divisionOfNum(n1,n2);
      cout<<"\n Divisiopn = "<<div;
    return 0;
 }