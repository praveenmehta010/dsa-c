#include<iostream>
using namespace std;

class Stack
{
int size = 10;
int* stack_array{}; 
int no_of_values{};

public:
Stack();
Stack(int);
void push(int);
int pop();
int peek();
bool isEmpty();

~Stack();
};

Stack::Stack(){
    stack_array = new int[size];
}
Stack::Stack(int a){
    int size = a;
    stack_array = new int[size];
}
void Stack::push(int key) {
    if(no_of_values!=size)
    {
        stack_array[no_of_values]=key;
        no_of_values++;
    };
}
int Stack::pop() {
    if(no_of_values!=0)
    {
        no_of_values--;
        return stack_array[no_of_values];
    }
}
int Stack::peek() {   
    if(no_of_values!=0)
    {
        return stack_array[no_of_values-1];
    }
}
bool Stack::isEmpty() {
    return !no_of_values;
}
Stack::~Stack() {
    delete[] stack_array;
}
int main() {

Stack s(5);
s.push(10);
s.push(20);
cout <<"Value at peek : "<< s.peek() <<endl;

if(s.isEmpty())
{
    cout <<"Stack is  Empty" << endl;
}
else
    cout <<"Stack is Not Empty" << endl;

s.pop();
cout <<"Value at peek : "<< s.peek() <<endl;

s.pop();
if(s.isEmpty())
{
    cout <<"Stack is Empty" << endl;
}
else
    cout <<"Stack is Not Empty" << endl;

return 0;
}