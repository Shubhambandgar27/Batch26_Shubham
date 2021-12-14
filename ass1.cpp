//WAP to calculate area of circle,Triangle and square.
#include<iostream>

using namespace std;

 int area(int rad)
 {
 	cout<<"\n Area of circle="<<(3.14*rad*rad);
 }
 int area(int b,int h)
 {
 	cout<<"\n Area of Triangle="<<(0.5*b*h);
 }
 int area(float side)
 {
 	cout<<"\n Area of Square="<<(side*side);
 }
int main()
{
	 area(4);
	 
	 area(5,4);
	 
	 area(6.0f);
	 
}
