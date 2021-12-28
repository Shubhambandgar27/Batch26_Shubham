/* WAP to accept the value of a from class Demo1 and value of b from class Demo2. The variables a and b 
are private. Exchange/swap the two values and display the result. [Use friend function] */

#include<iostream>

using namespace std;
class demo2;
class demo1
{
    private:
    int a;
    
     friend void swapTheNum(demo1 x,demo2 y);

};
class demo2
{
    private:
    int b;

    friend void swapTheNum(demo1 x,demo2 y);

};
 void swapTheNum(demo1 x,demo2 y);
int main()
{  
    demo1 d1;

    demo2 d2;
    swapTheNum(d1,d2);
    
    return 0;
}

 void swapTheNum(demo1 x,demo2 y)
 {
    
   cout<<"\n Enter the value of a :";
   cin>>x.a;
  
   cout<<"\n Enter the value of b :";
   cin>>y.b; 
   cout<<"\n a ="<<x.a;
   cout<<" b ="<<y.b;
   
    x.a=x.a+y.b;
    y.b=x.a-y.b;
    x.a=x.a-y.b;
    cout<<"\n a ="<<x.a;
   cout<<" b ="<<y.b;

    
 }