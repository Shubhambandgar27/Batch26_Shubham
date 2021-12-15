//WAP to display the array values in Ascending order
#include<iostream>

using namespace std;
 int sortbyarr(int no[])
 {
     for(int si=0;si<5;si++)
     {
         for(int ci=si+1;ci<5;ci++)
         {
             if(no[si]>no[ci])
             {
                 int temp=no[si];
                no[si]=no[ci];
                 no[ci]=temp;
             }
         }
     }
     return no[5];
 }
int main()
{
    int arr[5]={7,5,9,3,8};
    cout<<"\n Given array=";
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    sortbyarr(arr);
    
    cout<<"\n after sorting= ";
    for(int i=0;i<5;i++)
    {
      cout<<" "<<arr[i];
    }
   
    return 0;
}