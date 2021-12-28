/* WAP to create a class ARRAY with member function getarray() which accepts the array elements as user 
defined size and create another function geteven(), getodd() to display the all even and odd values from 
the array.[Use scope resolution operator] */

#include<iostream>

using namespace std;
class Array
{
    public:
    int arr[10];
    void getarray(int arr[])
    {
        for(int i=0;i<10;i++)
        {
          this->arr[i]=arr[i];
        }
    }

    void getodd(int arr[]);
    void geteven(int arr[]);
};
void Array::getodd(int arr[])
 { 
     for(int i=0;i<10;i++)
     {
         if((arr[i]%2)==1)
         cout<<" "<<arr[i];
     }
 }
 void Array::geteven(int arr[])
 { 
     for(int i=0;i<10;i++)
     {
         if((arr[i]%2)==0)
          cout<<" "<<arr[i];
     }
 }
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    Array a1;
    a1.getarray(arr);
     cout<<"\n total odd numbers=";
     a1.getodd(arr);
     cout<<"\n Total Even numbers =";
     a1.geteven(arr);

    return 0;
}