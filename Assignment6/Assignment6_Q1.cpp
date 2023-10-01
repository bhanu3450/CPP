#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
        cout << "inside date ctor" << endl;
    }

    void accept()
    {
        cin >> this->day;
        cin >> this->month;
        cin >> this->year;
    }

    void display()
    {
        cout << "date: " << day << "-" << month << "-" << year << endl;
    }

    void setDay(int day)
    {
        this->day = day;
    }
    int getDay()
    {
        return this->day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    int getMonth()
    {
        return this->month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return this->year;
    }
    bool isLeapYear()
    {
        if ((this->year % 4 == 0) && ((this->year % 400 == 0) || (this->year % 100 != 0)))
        {
            cout << this->year << " is a leap year" << endl;
            return true;
        }else {
        cout<<this->year<<" is not a leap year"<<endl;
        return false;
      }
    }
};

class employee
{

private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee()
    {
        this->id = 0;
        this->dept = "none";
        this->sal = 0;
    }
    employee(string dept, int id, float sal, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        cout << "inside employee ctor" << endl;
    }

    int getId(){
        return this->id;
    }

    void setId(int id){
        this->id = id;
    }

    int getSal(){
        return this->sal;
    }

    void setSal(float sal){
        this->id = sal;
    }

    string getDept(){
        return this->dept;
    }

    void setDept(string dept){
        this->dept = dept;
    }

    date getDoj(){
        return this->doj;
    }

    void setDoj(date doj)
    {
        this->doj = doj;
    }

    void accept()
    {
        cout << "enter dept name" << endl;
        cin >> this->dept;
        cout << "enter salary" << endl;
        cin >> this->sal;
        cout << "enter id" << endl;
        cin >> this->id;
        cout << "enter date" << endl;
        doj.accept();
    }
    void display(){
        cout << "dept: " << dept << endl;
        cout << "sal: " << sal << endl;
        cout << "id: " << id << endl;
        // cout << "date: " << this->doj << endl;
        doj.display();
    }
};


class person
{
private:
    string name;
    string addr;
    date birth_date;

public:
    person(){
        this->addr = "";
        this->name = "";
    }
    person(string name, string addr, int day, int month, int year) : birth_date(day, month, year)
    {
        this->name = name;
        this->addr = addr;
        cout << "inside person ctor" << endl;
    }

    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
     string getAddr(){
        return this->addr;
    }
    void setAddr(string addr){
        this->addr = addr;
    }

    
};


int main(){
    date d1(9,9,1999);
    employee e1("CEO ",4, 5000, 28, 9, 2023);
    // employee e2;
    e1.getDept();
    e1.getDoj();
    e1.getId();
    e1.getSal();
    e1.display();
    e1.setDoj(d1);
    e1.display();
}