/*WAP to create a class population with data members city and totalpopulation & member functions 
getdata() with arguments which accepts the values. Create 3 objects and Display the name of city which 
has maximum number of population. */

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class population 
{
    public :
    char city[20];
    int total_population;

    void getdata(char city[],int total_population)
    {
       strcpy(this->city,city);
       this->total_population=total_population;
    }
    void display()
    {
        cout<<"\n"<<setw(10)<<this->city<<setw(10)<<"\t"<<this->total_population;
    }

};
 population findByMaxPop(population x,population y,population z);
int main()
{
    population p1,p2,p3;
    p1.getdata("kolhapur",90000);
    p2.getdata("sangli",80000);
    p3.getdata("Satara",70000);

    p1.display();
    p2.display();
    p3.display();

    population max = findByMaxPop(p1,p2,p3);
    cout<<"\n The city having maximum population :";
    max.display();
    return 0;
}
  population findByMaxPop(population x,population y,population z)
  {
      if(x.total_population > y.total_population && x.total_population > z.total_population)
      return x;
      else if(y.total_population > z.total_population)
      return y;
      else
      return z;
  }
