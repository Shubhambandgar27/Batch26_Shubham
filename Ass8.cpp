//WAP to display the minimum value among the array values.
#include<iostream>

using namespace std;
int searchbyarray(int arr[])
{ int min=arr[0];
  for(int i=1;i<5;i++)
  {
   
        if(min>arr[i])
         min=arr[i];
       
    
  }
  return min;
}
int main()
{
    int arr[5]={12,16,21,3,7};
    int ans=searchbyarray(arr);
cout<<"\n Given array=";
    for(int i=0;i<5;i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\n minimum value ="<<ans;
    return 0;
}