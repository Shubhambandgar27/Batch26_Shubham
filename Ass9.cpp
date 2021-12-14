//WAP to display ASCII value of any character.
#include<iostream>

using namespace std;
ascii(char ch)
{
    int no=(int)ch;
    return no;
}

int main()
{
    char ch;
    cout<<"\n Enter any character=";
    cin>>ch;
    int ans = ascii(ch);
    cout<<"\n ASCII value of given char..="<<ans;
    return 0;
}