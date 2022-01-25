/* WAP to create two classes as MktDept and ProdDept. Input name and salary of an Employee. 
Compare both employees and display which employee earns more. [Note : Variables Must be 
Private] */

#include<iostream>
#include<string.h>

using namespace std;
class MktDept
{
   private:
   char Name1[20];
   int slry1;
   
   public:
    int getcompareBySlry()
    {
        return slry1;
    }
    char* getname()
    {
        return Name1;
    }
     void addEmp(char Name1[],int slry1)
   {
       strcpy(this->Name1,Name1);
       this->slry1=slry1;
   }

};
class ProdDept
{
    private:
    char Name2[20];
    int slry2; 
    friend void compareBySlry(MktDept ,ProdDept );
    public:
    int getcompareBySlry()
    {
        return slry2;
    }
    char* getname()
    {
        return Name2;
    }
   
     void addEmp(char Name2[],int slry2)
   {
       strcpy(this->Name2,Name2);
       this->slry2=slry2;
   }

};
void compareBySlry(MktDept x,ProdDept y);
 
int main()
{
    
    MktDept m1;
    char Name1[20];
    int slry1;
    cout<<"\n Enter the name of Employee of MKT dept =";
    cin>>Name1;
    cout<<"\n Enter the salary =";
    cin>>slry1;
    m1.addEmp(Name1,slry1);
  
  
    ProdDept p1;
    char Name2[20];
    int slry2;
    cout<<"\n Enter the name of Employee of production dept =";
    cin>>Name2;
    cout<<"\n Enter the salary =";
    cin>>slry2;
    m1.addEmp(Name2,slry2);
  
    compareBySlry(m1,p1);

    return 0;
}

   void compareBySlry(MktDept x,ProdDept y)
 {
     if(x.getcompareBySlry() > y.getcompareBySlry())
     cout<<"\n"<<x.getname()<<" Earns More !!";
     else if(x.getcompareBySlry() < y.getcompareBySlry())
       cout<<"\n"<<y.getname()<<" Earns More !!";
 }