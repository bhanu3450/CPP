#include <iostream>
using namespace std;

class employee
{

protected:
    int id;
    float sal;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
        cout << "default employee ctor" << endl;
    }
    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
        cout << "inside employee ctor" << endl;
    }

    int getId()
    {
        return this->id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getSal()
    {
        return this->sal;
    }

    void setSal(float sal)
    {
        this->id = sal;
    }

    void accept()
    {
        cout << "enter salary" << endl;
        cin >> this->sal;
        cout << "enter id" << endl;
        cin >> this->id;
    }
    void display()
    {
        cout << "sal: " << sal << endl;
        cout << "id: " << id << endl;
    }
};

class manager : virtual public employee
{
protected:
    float bonus;

public:
    manager()
    {
        this->bonus = 0;
        cout << "default manager ctor" << endl;
    }
    manager(float bonus){
        this->bonus = bonus;
    }
    manager(int id, float sal, float bonus) : employee(id, sal)
    {
        this->bonus = bonus;
        cout << "para manager ctor" << endl;
    }
    int getBonus()
    {
        return this->bonus;
    }
    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "enter bonus" << endl;
        cin >> this->bonus;
    }
    void display()
    {
        employee::display();
        cout << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        employee::accept();
        cout << "enter bonus" << endl;
        cin >> this->bonus;
    }
    void display_manager()
    {
        employee::display();
        cout << this->bonus << endl;
    }
};

class salesman : virtual public employee
{
protected:
    float comm;

public:
    salesman()
    {
        this->comm = 0;
        cout << "inside salesman ctor" << endl;
    }
    salesman(float comm, int id, float sal) : employee(id, sal)
    {
        this->comm = comm;
        cout << "para salesman ctor" << endl;
    }
    salesman(float comm){
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "enter comm" << endl;
        cin >> this->comm;
    }
    void display()
    {
        employee::display();
        cout << this->comm << endl;
    }
    float getComm()
    {
        return this->comm;
    }
    void setComm(float comm)
    {
        this->comm = comm;
    }

protected:
    void accept_salesman()
    {
        cout << "enter comm" << endl;
        cin >> this->comm;
    }
    void display_salesman()
    {
        cout << this->comm << endl;
    }
};

class sales_manager : manager, salesman
{

public:
    sales_manager()
    {
        cout << "inside sales manager" << endl;
    }
    sales_manager( float bonus, float comm):  manager(bonus), salesman(comm){
    //  int id, float sal, employee(id, sal),
    }
    void display(){
        // employee::display();
        // cout << manager::id <<endl;
        // cout << this->bonus <<endl;
        // cout << this->comm << endl;
        // cout << salesman::sal<< endl;
        manager::display();
        salesman::display();

    }
};

int main()
{
     employee e1(1, 4000);
     manager m1;
     m1.display();
     manager m2(2, 8000, 1);
     m2.display();
     sales_manager s2(500, 41111);
     s2.display();


    return 0;
}
