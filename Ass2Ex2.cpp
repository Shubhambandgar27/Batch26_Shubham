//WAP to input two integer numbers and display their addition.

#include<iostream>

using namespace std;
int AdditionOfNum(int n1,int n2)
{
    return (n1+n2);
}

int main()
{
    int n1,n2;

    cout<<"\n Enter Any two numbers n1 & n2 :";
    cin>>n1>>n2;

    int sum = AdditionOfNum(n1,n2);
    cout<<"\n Addition of Given Numbers :"<<sum;
    return 0;
}