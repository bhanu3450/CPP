// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide necessary constructors.

#include <iostream>
#include <string>
using namespace std;



int volumeOfBox(){
    int length;
    int width; 
    int height;
    cout << "enter length, width, height";
    cin >> length >> width >> height;
    return length*width*height;
}

int  input()
{
    int num;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1.volume calculator" << endl;
    cout << "Enter your choice = ";
    cin >> num;
    cout << "*******************" << endl;
    return num;
}

int main(){
while (1)
{
    int choice = input();
    switch (choice)
    {
    case 0:
        cout << "Exitttingggggg goodbye" << endl;
        exit(0);

    case 1:
             int result = volumeOfBox();
            cout << "calculated area is : " << result << endl;
        break;
    
    }
};
}

