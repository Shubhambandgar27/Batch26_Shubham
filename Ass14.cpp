//WAP to display even and odd values from the given range.

#include<iostream>

using namespace std;
void findEvenOdd(int n1,int n2)
{
     cout<<"\n Even num.=";
   for(int i=n1;i<n2;i++)
   {
     if((i%2)==0)
     cout<<" "<<i;
   }
   cout<<"\n Odd num=";
  for(int i=n1;i<n2;i++)
   {
     if((i%2)==1)
     cout<<" "<<i;
   }
}
int main()
{
    int n1,n2;
    cout<<"\n Enter two numbers n1 & n2:";
    cin>>n1>>n2;
   findEvenOdd(n1,n2);
   
    return 0;
}