//WAP Interchanging 2nd and 3rd digit from 5 digit integer number.
#include<iostream>

using namespace std;
int interchange(int no)
{   
    int arr[5];
    for(int i=0;i<5;i++)
    {
        int rem=no%10;
            arr[i]=rem;
            no=no/10;
    }
    int temp =arr[2];
        arr[2]=arr[3];
        arr[3]=temp;
     for(int i=4;i>=0;i--)
     {
        cout<<arr[i];
     }
}
int main()
{   int no;
    cout<<"\n Enter any 5 digit number :";
    cin>>no;
  
    cout<<"\n After interchanging 2nd & 3rd digit number :";
     interchange(no);
    return 0;
}