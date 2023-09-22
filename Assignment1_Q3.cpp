// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include<iostream>
#include<string>
using namespace std;

class student{
private:
    int roll_no;
    string name;
    int marks;

public:
    void initStudent(){
        this->roll_no = 80370;
        this->name = "Bhanu Pratap Singh Rathore";
        this->marks = 40; 
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


int main(){
   student s1;
   s1.acceptStudentFromConsole();
   s1.printStudentOnConsole();
}