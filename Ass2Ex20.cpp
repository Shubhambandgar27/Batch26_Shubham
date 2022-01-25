/* WAP to Perform Recursion Function which accepts one Integer Argument from the user, Which 
is Last number. Display first n numbers.*/

#include<iostream>

using namespace std;

 int i=0;

 int displayNum(int x)
 {
     
     cout<<" "<<++i;
    if(i<x)
     displayNum(x);
 }

int main()
{    
    int no;
    cout<<"\n Enter any number :";
    cin>>no;

    displayNum(no);
}