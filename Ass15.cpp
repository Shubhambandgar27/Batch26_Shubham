 //WAP to swap the two numbers without using temperory variable.

#include<iostream>
using namespace std;
void swapnum(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n Affter Swapping \n:";
     cout<<"a = "<<a<<"\n"
        <<"b = "<<b;
    
}
int main()
{
    int a,b;
    cout<<"\n Enter the value a & b :";
    cin>>a>>b;

    cout<<"a = "<<a<<"\n"
        <<"b = "<<b;
        swapnum(a,b);
    return 0;
}