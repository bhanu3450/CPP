// Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
// namespace. Test the functionalities.

#include<iostream>
#include<string>
using namespace std;

namespace NStudent{
class student{
private:
    int roll_no;
    string name;
    int marks;

public:
    void initStudent(){
        this->roll_no = 80370;
        this->name="Bhanu Pratap Singh Rathore";
        this->marks = 40; 
        cout<<this->roll_no<<", "<<this->name<<", "<<this->marks<<endl;
    }
    
    void acceptStudentFromConsole(){
        cout<<"enter roll no: "<<endl;
        cin>>this->roll_no;
        cout<<"enter name: "<<endl;
        cin>>this->name;
        cout<<"enter marks: "<<endl;
        cin>>this->marks;   
    }       

    void printStudentOnConsole(){
        cout<<"STUDENT"<<endl;
        cout<<"roll no: "<<this->roll_no<<endl;
        cout<<"name: "<<this->name<<endl;
        cout<<"marks: "<<this->marks<<endl;
    }
    
};
}

int main(){
   NStudent::student s1;
   s1.initStudent();
   s1.acceptStudentFromConsole();
   s1.printStudentOnConsole();
}