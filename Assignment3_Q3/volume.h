#ifndef VOLUMEOFCYLINDER_H
#define VOLUMEOFCYLINDER_H


// Q3. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
// approach)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.


#include<iostream>
#include<string>
using namespace std;

class volume{
   private:
   double radius;
   double height;

   public:
   volume(double radius,double height);
   double getRadius();
   void setRadius();
   double getHeight();
   void setHeight();
   double getVolume();
   void printVolume();
};
#endif