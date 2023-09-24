
#include "./volume.h"
#include "./menu.h"
#include<iostream>

  
//     volume:: volume()
//     {
//            radius=0;
//            height=0;
//    };
    volume::volume(double radius,double height): radius(radius),height(height){
            
    }
   
   double volume::getRadius(){
         return this->radius;
   }

   void volume::setRadius(){
    cout << "enter radius" << endl;
    cin >> this->radius ;
   }

   double volume::getHeight(){
    return this->height;
   }
   
   void volume::setHeight(){
    cout << "enter height" << endl ;
     cin >> this->height;
   }

   double volume::getVolume(){
     return (3.14 * this->radius * this->radius * this->height); 
   }

   void volume::printVolume(){
    double result = volume::getVolume();
    cout << "Volume of cylinder is : " << result << endl;
   }





