//WAP to display the minimum value among the array values.
#include<iostream>

using namespace std;
int searchbyarray(int arr[])
{ int min=arr[0];
  for(int i=0;i<5;i++)
  {
    for(int ci=i+1;ci<5;ci++)
    {
        if(arr[i]<arr[ci])
         min=arr[i];
       
    }
  }
  return min;
}
int main()
{
    int arr[5]={27,14,8,70,21};
    int ans=searchbyarray(arr);
    cout<<"\n Given array=";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\n minimum value ="<<ans;
    return 0;
}