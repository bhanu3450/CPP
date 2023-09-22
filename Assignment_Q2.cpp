// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include <iostream>
#include <string>
using namespace std;

int input();

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        this->day = 2;
        this->month = 22;
        this->year = 2023;
        cout<<"DATE: "<< this->day<<"-"<< this->month<<"-"<< this->year<<endl;
    }

    void acceptDateFromConsole()
{
    cout<<"enter a DAY e.g mon, tue, etc: \n";
    cin>> this->day;
    cout<<"enter a month e.g sept, oct etc: \n";
    cin>>this->month;
    cout<<"enter a year e.g 1997, 1919 etc : \n";
    cin>> this->year;
}

void printDateOnConsole()
{
   cout<<"DATE: "<< this->day<<"-"<< this->month<<"-"<< this->year<<endl;
}

void printDay()
{
    cout<<"entered day is : "<< this->day<<endl;
}

void printMonth()
{
    cout<<"entered day is : "<< this->month<<endl;
}

void printYear()
{
    cout<<"entered day is : "<< this->year<<endl;
}

bool isLeapYear(){
    cout<<"ENTER an year to check if it is leap or not"<<endl;
    cin>>this->year;
    if ( (this->year%4==0) && ((this->year%400==0) || (this->year%100!=0)) ) {
      cout<<this->year<<" is a leap year"<<endl;
      return true;
    }
      else {
        cout<<this->year<<" is not a leap year"<<endl;
        return false;
      }
};



};




int main()
{
    struct Date d1;
    d1.initDate();

    while (1)
    {
        cout<<"Menu: 0-day, 1-month, 2-year, 3-Complete DATE,  4-to check leapyear, 5-exit, Any other no. repeat loop \n";
        int choice = input();
        switch (choice)
        {
        case 0:
        {
            d1.printDay();
            break;
        }

        case 1:
        {
            d1.printMonth();
            break;
        }

        case 2:
        {
            d1.printYear();
            break;
        }

        case 3:
            d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;

        case 4:
            d1.isLeapYear();
            break;

        case 5:
            printf("EXITING");
            exit(0);
        }
    };
};

int input()
{
    int num;
    cout<<"Enter a num : \n";
    cin>>num;
    return num;
}