//WAP to perform addition,subtraction,multiplication and division using pointer variable.
#include<iostream>

using namespace std;

 int addition(int *n1,int *n2)
 {
     return (*n1+*n2);
 }
 int subtraction(int *n1,int *n2)
 {
     return (*n1-*n2);
 }
 int multiplication(int *n1,int *n2)
 {
     return ((*n1)*(*n2));
 }
 float division(int *n1,int *n2)
 {
     return (*n1/ *n2);
 }
int main()
{
    int a,b;
    cout<<"\n Enter any two values..";
    cin>>a>>b;

    int add = addition(&a,&b);
    cout<<"\n Additon of numbers="<<add;

    int sub = subtraction(&a,&b);
    cout<<"\n subtraction of numbers="<<sub;

    int mult = multiplication(&a,&b);
    cout<<"\n multiplication of numbers="<<mult;

    float div = division(&a,&b);
    cout<<"\n Division of numbers="<<div;
    return 0;
  
}
