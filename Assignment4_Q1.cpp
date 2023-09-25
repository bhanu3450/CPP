// Q1. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.


#include<iostream>
#include<string>
using namespace std;

class Time{
   private:
   int sec;
   int min;
   int hr;


   public:
   Time(){};
   
   Time(int sec, int min, int hr){
    this->sec = sec;
    this->min = min;
    this->hr = hr;
   }

   int getHour(){
    return this->hr;
   }
   int getMinute(){
     return this->min;
   }
   int getSeconds(){
     return this->sec;
   }

   void printTime(){
    cout<< "Time: " << this->hr << ", " << this->min << ", " << this->sec << endl;
   }

   void setHour(){
    cout << "Enter Hour" << endl;
    cin >> this->hr ;
   }

   void setMinute(){
    cout << "enter Minute" << endl ;
     cin >> this->min;
   }

   void setSeconds(){
    cout << "Enter Seconds" << endl;
    cin >> this->sec;
   }
   void setTime(){
    setHour();
    setMinute();
    setSeconds();
   }

};



int main(){
    Time **arr = new Time *[5];
    // dynamic memory allocation for objects
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new Time();
    }

// Putting values in the array of objects
       for (int i = 0; i < 5; i++)
    {
        cout << "Enter the values for index " << i << " = " << endl;
        arr[i]->setTime();
    }

// displaying the objects
    for (int i = 0; i < 5; i++)
    {
        cout << "values at index " << i << " = " << endl;
        arr[i]->printTime();
    }

    /// deallocating the objects memory
    for(int i=0; i<5; i++){
        delete arr[i];
    }
    
    delete[] arr;
    return 0;


};
