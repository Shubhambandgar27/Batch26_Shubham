/*WAP to input an array of 10 elements and display addition of all elements. Also Display even 
and odd numbers from it */

#include<iostream>

using namespace std;
int AdditionOfArray(int arr[])
{
  int sum=0;
  for(int i=0;i<10;i++)
  {
      sum = sum + arr[i];
  }
  return sum;
}
 void DisplayOddEven(int arr[])
 {  cout<<"\n Even Numbers : ";
     for(int i=0;i<10;i++)
     {
         if((arr[i]%2)==0)
         cout<<" "<<arr[i];
     }

     cout<<"\n Odd numbers : ";
     for(int i=0;i<10;i++)
     {
         if((arr[i]%2)==1)
         cout<<" "<<arr[i];
     }


 }
int main()
{
    int arr[10];

    cout<<"\n Enter the values of array :";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n Given Array :";
    for(int i=0;i<10;i++)
    {
        cout<<" "<<arr[i];
    }
    int sum = AdditionOfArray(arr);
    cout<<"\n The Addition of elements of Array :"<<sum;

    DisplayOddEven(arr);
    return 0;
}