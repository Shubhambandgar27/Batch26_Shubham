//WAP to display prime numbers between the user specified range
#include<iostream>

using  namespace std;
int isprime(int a)
{ int cnt=0;
    
    for(int d=1;d<=a;d++)
    {
        if((a%d)==0)
    cnt++;
    }
    
    return cnt;
}
int main()
{
    int n1,n2;
    cout<<"\n Enter any Two numbers=";
    cin>>n1;
    cin>>n2;
    cout<<"\n prime numbers=";
    for(int i=n1;i<=n2;i++)
    {
       int ans = isprime(i);
        if(ans==2)
       cout<<"\n"<<i;
    }
    
    
   
}