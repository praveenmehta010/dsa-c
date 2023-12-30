#include <iostream>
using namespace std;

class Stack
{
private:
    int size = 10;
    int *stack_array{};
    int top = -1;

public:
    Stack();
    void push(int);
    void pop();
    void peek();
};

Stack::Stack()
{
    stack_array = new int[size];
}

void Stack::push(int val)
{
    if (top < size)
    {
        top++;
        stack_array[top] = val;
    };
}

void Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack is underflow so there is nothing to remove" << endl;
    }
    else
    {
        cout << stack_array[top] << " removed from the stack" << endl;
        top--;
    }
}

void Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is underflow So there is nothing to peek" << endl;
    }
    else
    {
        cout << stack_array[top] << " is the peek value" << endl;
    }
}

int main()
{
    int input;
    cout << "1 push value to stack " << endl;
    cout << "2 pop value from stack " << endl;
    cout << "3 peek value from stack " << endl;
    cout << "4 Terminate the program" << endl;

    Stack obj;
    do
    {
        cout << "Enter a option :- ";
        cin >> input;

        switch (input)
        {
        case 1:
            int val;
            cout << "Enter the value :- ";
            cin >> val;
            obj.push(val);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.peek();
            break;
        case 4:
            cout << "Catch you later" << endl;
            break;
        default:
            cout << "Enter a valid option" << endl;
            break;
        }
    } while (input != 4);
    return 0;
}   