/*Write a menu driven program to perform 1. Add Book [Book No,Book Name, Book price]
2. Display Book 3. Search Book 4. Display all books 5. Exit.*/

#include<iostream>
#include<string.h>
#include<unistd.h>
#include<iomanip>
using namespace std;


void display(int no)
{
    switch(no)
    {
        case 102:
                 cout<<"\n 102"<<"\t spirituality"<<"\t Rs. 500";
                 break;
        case 103:
                cout<<"\n 103"<<"\t Chemistry."<<"\t RS.400";
                break;
        case 104:
                cout<<"\n 104"<<"\t Physics."<<"\t RS.300";
                break;
        default:
                 cout<<"\n Book is not Exist...";
    }
}
void searchByName(char Name[])
{
    if(stricmp(Name,"Spirituality")==0)
    cout<<"\n"<<Name<<" is exists in stock.";
    else if((stricmp(Name,"Chemistry")==0))
    cout<<"\n"<<Name<<" is exists in stock.";
    else if((stricmp(Name,"physics")==0))
     cout<<"\n"<<Name<<" is exists in stock.";
     else
      cout<<"\n"<<Name<<" is not exists in stock.";
}
void showallbooks()
{
    cout<<"\n 102"<<setw(20)<<"\t Spirituality"<<"\t RS.500";
    cout<<"\n 103"<<setw(20)<<"\t chemistry"<<"\t RS.400";
    cout<<"\n 104"<<setw(20)<<"\t physics"<<"\t RS.300";
}

int main()
{

    int choice,book_no,price,no;
    char book_name[20], Name[20];

    cout<<"\n 1. Add Book [Book No,Book Name, Book price] \n 2. Display Book \n 3. Search Book \n 4. Display all books  \n 5. Exit.";

    

    cout<<"\n Enter choice number :";
    cin>>choice;

    switch(choice)
    {
        case 1:
              { cout<<"\n you have selected Add Book Option :";
               cout<<"\n Enter book number:";
               cin>>book_no;
               cout<<"\n Enter Book Name :";
               cin>>book_name;
               cout<<"\n Enter the Price of Book :";
               cin>>price;
               cout<<"\n The Book is Succesfully Added ...";
               }
               break;
        case 2:
               { cout<<"\n Enter book number to display :";
                cin>>no;
                display(no);
                }
                break;
        case 3:
                {
                   cout<<"\n You have select Search book option :";
                   cout<<"\n Enter the name to search...";
                    cin>>Name;
                   searchByName(Name);
                } 
                break;
        case 4:
                {
                  cout<<"\n You have selected option to display all books.";
                  showallbooks();
                } 
                break;
        case 5:
               { cout<<"\n Exit..!";
                sleep(3);
                system("cls");
                }
                break;
        default:
                 cout<<"\n Invalid choice..";
    }
    return 0;
}