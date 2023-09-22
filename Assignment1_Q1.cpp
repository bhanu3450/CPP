// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

#include <iostream>
#include <string>
using namespace std;

int input();

struct Date{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate){
    ptrDate->day = 2;
    ptrDate->month= 22;
    ptrDate->year = 2023;
     printf("DATE: %d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year );
}

void acceptDateFromConsole(struct Date *ptrDate){
    printf("enter a DAY e.g mon, tue, etc: \n");
    scanf("%d", &ptrDate->day);
    printf("enter a month e.g sept, oct etc: \n");
    scanf("%d", &ptrDate->month);
    printf("enter a year e.g 1997, 1919 etc : \n");
    scanf("%d", &ptrDate->year);
    }

void printDateOnConsole(struct Date  d){
    printf("DATE : %d-%d-%d\n",  d.day, d.month, d.year);
}

 void printDay(struct Date *day){
    printf("entered day is : %d\n", day->day);
 }

  void printMonth(struct Date *month){
    printf("entered day is : %d \n", month->month);
 }

  void printYear(struct Date *year){
    printf("entered day is : %d\n", year->year);
 }


int main(){
    struct Date d1;
    initDate(&d1);


    while(1){
    printf("Menu: 0-day, 1-month, 2-year, 3-Complete DATE,  4-exit, Any other no. repeat loop \n");
    int choice = input();
    switch (choice) {
    case 0: {
        printDay(&d1);
        break;
    }
     
     case 1: {
        printMonth(&d1);
        break;
    }

    case 2: {
        printYear(&d1);
        break;
    }

    case 3: 
        acceptDateFromConsole(&d1);
        printDateOnConsole(d1);
        break;
    

    case 4:
    printf("EXITITING");
    exit(0);
    }
    };

};

int input(){
    int num;
    printf("Enter a num : \n");
    scanf("%d", &num);
    return num;
}