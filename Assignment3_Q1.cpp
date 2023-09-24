#include<iostream>
using namespace std;

class volumeOfBox{
    private:
    double length;
    double width;
    double height;
    public:
    volumeOfBox(){
        this->length=0;
        this->height=0;
        this->width=0;
    }
    volumeOfBox(double length ){
        this->length = length;
        this->width = 0;
        this->height = 0;
    }
    volumeOfBox(double length , double width ){
        this->length = length;
        this->width = width;
        this->height = 0;
    }
    volumeOfBox(double length , double width,  double hgth ){
        this->length = length;
        this->width = width;
        this->height = height;
    }
    void accept(){
        cout << "please enter length : ";
        cin >> this->length;
        cout << "please enter width : ";
        cin >> this->width;
        cout << "please enter height : ";
        cin >> this->height;
        
        }
    void display(){
        cout << "length : "<<length<<endl;
        cout << "Width : "<<width<<endl;
        cout << "Hight : "<<height<<endl;
    }

    void volume(){
        cout << "THE VOLUME OF THE BOX IS : " << length*width*height << endl;
    }

};

int menu(){
    int choice;
    cout << "****************************************" << endl ;
    cout << "0. Exit" << endl ;
    cout << "1. Enter dimensions " << endl ;
    cout << "2. Display dimensions" << endl ;
    cout << "3. Calculate and show Volume" << endl ;
    cout << "Please enter your choice : " ;
    cin >> choice ;
    cout << "****************************************" << endl ;
    return choice;
}

int main(){
    volumeOfBox b1;
    int choice;
    while(choice = menu())
    {
        switch (choice)
        {
        case 1: b1.accept();
            break;
     
        case 2: b1.display();
            break;
     
        case 3: b1.volume();
            break;
     
        default:
        cout << "PLEASE ENTER A VALID INPUT " << endl;
            break;
        }
    }
}