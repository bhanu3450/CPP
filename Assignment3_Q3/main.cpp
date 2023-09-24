#include "./volume.h"
#include "./menu.h"
int main(){
   volume v2(1,1);
   
   int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1: 
            v2.setHeight();
            break;
        case 2:
            v2.setRadius();
            break;
        case 3:
            cout<< "Height: " << v2.getHeight() << "Radius: " << v2.getRadius()<<endl ;   
        case 4:
            v2.printVolume();
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;


};
