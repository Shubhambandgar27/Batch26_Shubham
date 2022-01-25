/* WAP to overload the Constructor Addition which is used to calculate Addition of two Integers,
 3 Decimals and array of integer*/

 #include<iostream>

 using namespace std;
class Addition 
{
    public:
    int a,b;
    float p,q,r;
    int x[5],y[5];

    Addition(int a,int b)
    {
        this->a=a;
        this->b=b;
        
        cout<<"\n Sum of two integers :"<<a+b;
    }
   Addition(float p,float q,float r)
   {
       this->p=p;
       this->q=q;
       this->r=r;

       cout<<"\n Sum of 3 decimals :"<<p+q+r;
   }
   Addition(int x[],int y[])
   {    int Arr[5];
       for(int i=0;i<5;i++)
       {
           this->x[i]=x[i];
           this->y[i]=y[i];
       }
       for(int i=0;i<5;i++)
       {
         Arr[i] = x[i] + y[i];
       }
      cout<<"\n Sum of two array :";
      for(int i=0;i<5;i++)
       {
           cout<<" "<<Arr[i];
       }

   }

};
 int main()
 {    int arr1[]={2,3,4,5,6};
      int arr2[]={8,7,6,5,4};
    Addition a1(10,20);
    Addition a2(2.3,3.3,4.4);
    Addition a3(arr1,arr2);
 }