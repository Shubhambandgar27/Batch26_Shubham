//WAP to calculate area of circle,Triangle and square.
#include<iostream>

using namespace std;

 float areaofcircle(int rad)
 {
 	
	 return (3.14*rad*rad);
 }
 int areaoftriangle(int b,int h)
 {
	
	return (0.5*b*h);
 }
 int areasquare(float side)
 {
 	
	 return (side*side);
 }
int main()
{
	 float AOC = areaofcircle(4);
	 
	 int AOT = areaoftriangle(5,4);
	 
	 int AOS = areasquare(6.0f);
	 cout<<"\n Area of circle="<<AOC;
	cout<<"\n Area of Triangle="<<AOT;
	cout<<"\n Area of Square="<<AOS;

}
