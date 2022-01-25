//WAP to interchange the integer numbers using a function [Reference Arguments].

#include<iostream>

using namespace std;
void SwapNum(int *x,int *y)
{
   int temp = *x;
   *x=*y;
   *y=temp;

   cout<<"\n x = "<<*x<<"\t y = "<<*y;
}
int main()
{
    int x,y;
    cout<<"\n Enter any two numbers :";
    cin>>x>>y;
    cout<<"\n x = "<<x<<"\t y = "<<y;

    cout<<"\n After Swapping :";

    SwapNum(&x,&y);

  return 0;
}