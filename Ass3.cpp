//WAP to find the maximum number amongst three numbers.

#include<iostream>

using namespace std;
int maximum(int x,int y,int z)
{
    if(x>y && x>z)
    return x;
    else if (y>x && y>z)
    return y;
    else
    return z;
}
int main()
{
	int a,b,c;
	cout<<"\n Enter any three numbers=";
	cin>>a;
    cin>>b;
    cin>>c;
int ans=maximum(a,b,c);
 cout<<"\n Maximum number="<<ans;

}