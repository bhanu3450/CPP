#include "./menu.h"
#include "./volume.h"
int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Enter height " << endl;
    cout << "2. Enter Radius "<< endl;
    cout << "3. Display height and radius" << endl;
    cout << "4. CALCULATE VOLUME OF CYLINDER" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}