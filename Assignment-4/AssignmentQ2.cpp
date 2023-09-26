// Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include<iostream>
using namespace std;

class stack
{
private:
int top;
int size;
// int capaciy;
int *arr;

public:

stack(){
    this->top = -1;
    this->size=5;
    arr = new int[5];
}

~stack(){
    delete[] arr;
}

stack(int size ){
    this->size = size;
    this->top = -1;
    arr = new int[size];


}
   
bool isEmpty(){
    if (this->top == -1){
    return true;
    }else return false;
}

bool isFull(){
    if (this->top== this->size - 1) return true;
    else return false;
}

bool push(int x){
    if(isFull()){ 
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
     arr[++top] = x;
     cout << x << " pushed into stack\n";
     return true;
    }
}

int peek(){
  if(!(isEmpty())){
    return arr[top];
  }
  else return 0;
}

int pop(){
if (isEmpty()){
    cout << "stack underflow" << endl;
    return 0;
}else
{
    cout << "removing "<< peek() << endl;
    return arr[top--];
}
}

void print(){
    for (int i = 0; i < this->size; i++)
    {
      cout << "arr["<<i<<"] = " << arr[i]<< endl;
    }
    
}

};

int main(){
    stack s1(3);
    s1.push(400);
    s1.push(488);
    s1.push(41);
    s1.push(63);
    s1.push(777777);
    s1.push(2115);
    s1.pop();
    s1.peek();
    s1.print();
}