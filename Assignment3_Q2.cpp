// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
// ( write a menu driven code for it)

#include <iostream>
#include <string>
using namespace std;

class tollbooth
{
private:
  unsigned int noOfCars;
  double cashTotal;

public:
  tollbooth(){
     this->noOfCars = 0;
     this->cashTotal = 0;
  }
void payingCar(){
    this->noOfCars++;
    this->cashTotal += 0.50;  
    // cout << "total number of paying cars pass by : " << noOfCars <<  "the total amount of money: " << cashTotal << endl;
}

void noPayCar(){
  this->noOfCars++;
  // this->cashTotal;
  // cout << "total number of non paying cars pass by : " << noOfCars <<  "the total amount of money: " << cashTotal << endl;
}

void printOnConsole(){
    this->noOfCars;
    this->cashTotal;

    double totalIdealMoney = this->noOfCars*0.50;
    double RealMoneyCollected = totalIdealMoney - this->cashTotal;
    int payingCars = this->cashTotal / 0.50;
    // int nonPayingCars = (totalIdealMoney - RealMoneyCollected)/0.50;
       int nonPayingCars = noOfCars - payingCars;

    cout << "total number of cars pass by : " << noOfCars<< endl <<  "the total amount of money: " << cashTotal << endl;
    cout << "total paying cars : " << payingCars<< endl << "total non paying cars : " << nonPayingCars << endl;
}

};

int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Pay toll tax" << endl;
    cout << "2. Allow em to proceed without paying TOLL "<< endl;
    cout << "3. DISPLAY cars that paid TOLL and cars that did not" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}

int main(){
   tollbooth C1;
   tollbooth(); 

    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            C1.payingCar();
            break;
        case 2:
            C1.noPayCar();
            break;
        case 3:
            C1.printOnConsole();
            cout << "Congratulations...You received an increment" << endl;
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
   
};

