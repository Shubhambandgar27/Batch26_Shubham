/*WAP to find billammount with discount. Apply discount in following conditions
1. if price of product is greater than Rs.50 then apply discount 2.5%
2. if price of product is greater than Rs.100 then apply discount 5%
3. if price of product is greater than Rs.200 then apply discount 7%*/
 #include<iostream>
using namespace std;
 float applydisct(float price)
 {
     if(price>=50 && price<100)
     return (price*(0.025));
     else if (price>=100 && price<200)
     return (price*(0.05));
     else if(price>=200) 
     return (price*(0.07));
 }
 int main()
 {
     float price;
     cout<<"\n Enter price of product=";
     cin>>price;

     float dis = applydisct(price);
     float billamnt = price - dis;
     cout<<"\n discount="<<dis<<"\n total Billamount="<<billamnt;
     return 0;
 }