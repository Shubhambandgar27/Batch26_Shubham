/*WAP to Declare a Shared Variable as Count. Define a function which counts the number of 
Students have been enrolled from the class Student.*/

#include<iostream>

using namespace std;
class student
{
    public:
    static int count;

   
};

 int student::count=5;
int main()
{
    student c1;
    int count=100;
    cout<<"\n Number of students:"<<student::count;
    return 0;
}