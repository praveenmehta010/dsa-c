#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front;
    Node *back;

public:
    Queue();
    void enQueue(int x);
    void deQueue();
    void peekQueue();
    void display();
};

Queue ::Queue()
{
    front = NULL;
    back = NULL;
}

void Queue::enQueue(int val)
{
    Node *temp = new Node(val);
    if (back == NULL)
    {
        front = temp;
        back = temp;
    }
    back->next = temp;
    cout << temp->val << " is added to the queue" << endl;
    back = temp;
}

void Queue ::deQueue()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        back = NULL;
    }
    else
    {
        cout<<front->val<<" is out of the Queue"<<endl;
        front = front->next;
    }
}

void Queue::peekQueue()
{
    if (front == NULL)
    {
        cout << "There is nothing to see " << endl;
    }
    else
        cout << "The peek value is " << front->val << endl;
}

void Queue::display()
{
    Node *temp = front;
    if (front == NULL)
    {
        cout << "There is nothing to see " << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

int main()
{

    Queue q;
    q.display();
    q.enQueue(10);
    q.enQueue(20);
    q.peekQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.deQueue();
    q.peekQueue();
    q.display();
}