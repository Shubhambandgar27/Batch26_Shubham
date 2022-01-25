/*Function Overloading : WAP to overload the function which displays the data to be passed by the user
void show() void show(char ch) void show(char ch[]) void show(String s)*/

#include<iostream>
#include<string.h>

using namespace std;

class Data
{
    public:
    char ch;
    char Ch[20];
    string s;
    void show()
    {
        cout<<"\n  ";
    }
    void show(char ch)
    {
       
        cout<<"\n"<<this->ch;
    }
    void show(char ch[])
    {
        strcpy(this->Ch,ch);
        cout<<"\n"<<this->Ch;
    }
    void show(string s)
    {
        cout<<"\n"<<s;
    }

};

int main()
{
    Data d1;
    d1.show();
    d1.show('s');
    d1.show("shubham");
    d1.show("Hello I am Shubham.");
}