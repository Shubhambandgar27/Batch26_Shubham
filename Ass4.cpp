//WAP to find the addition of numbers between the given range.
#include<iostream>

using namespace std;
int addition(int x,int y)
{
    int sum=0;
    for(int i=x;i<=y;i++)
    {
        sum= sum +i;
    }
    return sum;
}
int main()
{
    int n1,n2;
    cout<<"\n Enter any two Numbers=";
    cin>>n1;
    cin>>n2;
    int ans= addition(n1,n2);
    cout<<"\n The addition of numbers between range="<<ans;
}