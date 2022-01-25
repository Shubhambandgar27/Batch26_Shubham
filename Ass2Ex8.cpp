/*WAP to create a class Integer and declare a data member no. use different 3 objects to store the 
values and display maximum number from it */
#include<iostream>

using namespace std;
class Integer
{
    public:
    int no;

    void getinteger(int no)
    {
        this->no=no;
    }
    void display()
    {
        cout<<"\t"<<this->no;
    }


};

Integer FindByMax(Integer i1,Integer i2,Integer i3);

int main()
{
    int n1,n2,n3;
    cout<<"\n Enter any three numbers :";
    cin>>n1>>n2>>n3;
    Integer i1,i2,i3;
     i1.getinteger(n1);
     i2.getinteger(n2);
     i3.getinteger(n3);

     cout<<"\n All Integers = ";

     i1.display();
     i2.display();
     i3.display();

    Integer ans = FindByMax(i1,i2,i3);
      cout<<"\n The max number = ";
      ans.display();
    return 0;
}
 
 Integer FindByMax(Integer i1,Integer i2,Integer i3)
 {
     if(i1.no > i2.no && i1.no > i3.no)
     return i1;
     else if(i2.no > i3.no)
     return i2;
     else
     return i3;
 }