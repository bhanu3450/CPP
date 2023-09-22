// Q2. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.
// Instead of char[] use string datatype

#include<iostream>
#include<string>
using namespace std;


class address{
private:
    string building;
    string street;
    string city;
    int pin;

public:
// parameteress constructor
    address(){
        cout << "Inside parameterless ctor" << endl;

           this->building = "Burj Khalifa";
           this->street = "C-30, ";
           this->city = "Dubai";
           this->pin = 5000001;
    }
// // parameterized constructor
//     address(string building, string street, string city, int pin){
//            this->building = building;
//            this->street = street;
//            this->city = city;
//            this->pin= pin;
//     }

// ctor initializer list
address(string building, string street, string city, int pin) : building(building), street(street), city(city), pin(pin)
{
        cout << "Inside parameterized ctor" << endl;
          
}
// SETTERS    
    void setPin(int pin){
        this->pin = pin;
    } 
    void setStreet(string street){
          this->street = street;
    }
    void setCity(string city){
        this->city = city;
    }
    void setBuilding(string building){
        this->building = building;
    }

// GETTERS
    string getBuilding(){
        return this->building;
    }
    string getStreet(){
        return this->street;
    }
    string getCity(){
        return this->city;
    }
    int getPin(){
        return this->pin;
    }
   

       // Facilitators
void acceptAdress(){
    cout << "Enter building name, street, city, pin code" << endl;
    cin >> this->building >> this->street >> this->city >> this->pin;
}  
void displayAdress(){
    cout <<"ADDRESS = " << this->building << ", " << this->street << ", " << this->city << ", " << this->pin << endl;
}


};

int main(){
address a1;
a1.displayAdress();  

address a2("Chavan Hostel", "Shaniwar Peth", "Karad", 415110);
a2.displayAdress(); 

cout<<"Using Setters to change data of object a1 that is default"<<endl;
a1.setBuilding("wakad bldg");
a1.setCity("Pune");
a1.displayAdress();
a1.setStreet("manpura");
a1.setPin(321455);
a1.displayAdress();

cout<<"Output using getters: ";
cout<<a2.getBuilding()<<", ";
cout<<a2.getStreet()<<", ";
cout<<a2.getCity()<<", ";
cout<<a2.getPin()<<endl;

}