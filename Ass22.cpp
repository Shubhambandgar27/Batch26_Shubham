/* WAP to create a class ARRAY with member function getarray() which accepts the array elements. Define 
2 different objects of that class ARRAY as a1 and a2.Get array values in object a1 and in object a2.Define 
a function calculate() which accepts the objects as arguments and performs addition of array from 
object a1 and a2.*/

#include<iostream>

using namespace std;
class Array
{
  public:
  int arr[10];

  void getarray(int arr[])
  {
      for(int i=0;i<10;i++)
      {
        this->arr[i]=arr[i];
      }
  }
  void display()
  {   cout<<"\n Given Array :";
      for(int i=0;i<10;i++)
      {
          cout<<" "<<this->arr[i];
      }
  }
};
void calculate(Array x,Array y);
int main()
{  
    Array a1,a2; 
    int arr1[10]={23,45,57,37,91,23,63,77,18,33};
    a1.getarray(arr1);
    a1.display();
    int arr2[10]={1,2,3,4,5,6,7,8,9,10};
    a2.getarray(arr2);
    a2.display();

    calculate(a1,a2);
    return 0;
}
 void calculate(Array x,Array y)
 {   int sum1 = 0;
     for(int i=0;i<10;i++)
     {
         sum1=sum1 + x.arr[i];
     }
     cout<<"\n Sum of values of 1st array : "<<sum1;
      int sum2 = 0;
     for(int i=0;i<10;i++)
     {
         sum2=sum2 + y.arr[i];
     }
     cout<<"\n Sum of values of 1st array : "<<sum2;
 }
