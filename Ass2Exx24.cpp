/* Write a Menu Driven Program to Calculate Fare Charges for Travelling as Follows:
1. If Vehicle is Private then, Fare charges are Rs. 15 per Kilometer
2. If Vehicle is Ac then, Fare Charges are Rs. 18 per Kilometer
3. If Vehicle is Local, Fare Charges are Rs. 8 per Kilometer
4. If Vehicle is Bus Reservation, Fare charges are Rs.5.5 per kilometer
Display the Customer Ticket Details Correctly */

#include<iostream>

using namespace std;
class vehicle
{
    public:
    int dist=10;
    float chrg;
    
    void AddCharges(float chrg)
    {
        this->chrg=chrg;
    }
    void ShowFareChrg()
    {
        cout<<"\n Fare Charges ="<<dist*chrg;
    }
};

int main()
{   
  cout<<"\n 1.Private vehicle."
        "\n 2.AC vehicle."<<
        "\n 3.Local vehicle."<<
        "\n 4.Bus Reservation,";
        int choice;
        cout<<"\n Enter your choice :";
        cin>>choice;
        vehicle v1;
        switch(choice)
        {
            case 1:
                 cout<<"\n You have selected Private vehicle .";
                 v1.AddCharges(15);
                 v1.ShowFareChrg();
                 break;
            case 2:
                cout<<"\n You have selected AC vehicle.";
                v1.AddCharges(18);
                v1.ShowFareChrg();
                break;
            case 3:
                cout<<"\n You have selected Local Vehicle .";
                v1.AddCharges(8);
                v1.ShowFareChrg();
                break;
            case 4:
                cout<<"\n You have selected Bus reservation.";
                v1.AddCharges(5.5);
                v1.ShowFareChrg();
                break;
            default:
                cout<<"\n Invalid Choice...";
                break;
        }
    return 0;
}