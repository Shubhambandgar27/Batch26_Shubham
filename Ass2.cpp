//WAP to input any number and display the reverse.

#include<iostream>

using namespace std;
 int reverse(int no)
 { int rev=0;
 	for(no>0;no!=0;no=no/10)
 	{
 		int rmd=no%10;
 		    rev=rev*10+rmd;
 		     
	 }
	 return rev;
 }
int main()
{
	int no;
	cout<<"\n Enter any number=";
	cin>>no;
	int ans=reverse(no);
	cout<<"\n Reverse of Number="<<ans;
	
}
