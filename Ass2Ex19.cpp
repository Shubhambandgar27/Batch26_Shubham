/* WAP to overload the function Addition which performs addition of two integers, 3 Decimals and 
Array of Integer */

#include<iostream>

using namespace std;
class Addition
{
    public:
    int a,b,x[5];
    float p,q,r;

    void sum(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"\n Addtion of integer :"<<a+b;
    }
    void sum(float p,float q,float r)
    {
        
        cout<<"\n Addtion of 3 Decimals :"<<p+q+r;

    }
    void sum(int x[])
    {
        int sum=0;

        for(int i=0;i<5;i++)
        {
            sum = sum + x[i];
        }
        cout<<"\n Sum of integer of array :"<<sum;
    }
};
int main()
{
  
   Addition s1;
  
   int x[]={3,4,5,6,7};
   s1.sum(10,20);
    s1.sum(3.3,4.3,2.1);
   s1.sum(x);
}