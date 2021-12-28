/*WAP to input price,qty and create a fuction calculate() with arguments which accepts the price and qty 
and calculates Bill amount. Return the bill ammount. Display Total.*/

#include<iostream>

using namespace std;

int calculate(int price,int qty)
{
  return (price*qty);
}
int main()
{
    int price,qty;
    cout<<"\n Enter the price of the product :";
    cin>>price;
    
    cout<<"\n total Quantity :";
    cin>>qty;
    
    int bill_amnt = calculate(price,qty);
    cout<<"\n Total Bill Amount =";
    cout<<bill_amnt;
    
        return 0;
}
