/* WAP to create a class branch with data members branch ID, branch Name, Branch City and member 
functions as getdata() and Display() */

#include<iostream>
#include<string.h>

using namespace std;
class branch
{
  public:
  int branch_id;
  char branch_name[50];
  char branch_city[50];

  void getdata(int branch_id,char branch_name[],char branch_city[])
{
    this->branch_id=branch_id;
    strcpy(this->branch_name,branch_name);
    strcpy(this->branch_city,branch_city);
}
  void display()
  {
      cout<<"\n"<<this->branch_id<<"\t"<<this->branch_name<<"\t"<<this->branch_city;
  }
};
int main()
{
    branch b1,b2;
    b1.getdata(101,"Vishrambag","Sangli");
     b1.display();
    b2.getdata(102,"Shahupuri","Kolhapur");
    b2.display();
   return 0;
}