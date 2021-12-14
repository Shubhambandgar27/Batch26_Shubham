//WAP to create a function searcharray() which finds the array value is present or not.
#include<iostream>

using namespace std;
int searcharray(int num[],int no)
{   int cnt=0;
   for(int i=0;i<5;i++)
   {
       if(no==num[i])
       cnt++;
   }
   return cnt;
}
int main()
{    
    int no;
    int arr[5]={14,27,70,26,66};
    cout<<"\n Enter any value to search=";
    cin>>no;
   int ans =  searcharray(arr,no);

   if(ans==1)
   cout<<"\n Given number is presnt in the array=";
   else
   cout<<"\n Given number is not found..";

    return 0;

}