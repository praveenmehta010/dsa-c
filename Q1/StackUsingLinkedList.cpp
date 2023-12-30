#include <iostream>
using namespace std;

class Node
{
public:
	int val;
	Node *next;
	Node(int val)
	{
		this->val = val;
		next = NULL;
	}
};

class Stack
{
private:
	Node* top;

public:
	Stack();
	void push(int val);
	void peek();
	void pop();
	void display();
};

Stack::Stack()
{

	top = NULL;
}
void Stack::push(int val)
{
	Node *obj = new Node(val);
	
	obj->val = val;
	obj->next = top;
	top = obj;
}
void Stack::peek()
{
	cout << top->val<<" is at the top of the Linked List" << endl;
}
void Stack::pop()
{
	if (top == NULL)
	{
		cout << "Stack Underflow" << endl;
	}
	else
	{
		top = top->next;
	}
}

void Stack::display()
{
	Node *temp;

	if (top == NULL)
	{
		cout << "Stack Underflow";
	}
	else
	{
		temp = top;
		
		while (temp != NULL)
		{
			cout << temp->val << " -> ";
			temp = temp->next;
		}
		cout<<endl;
	}
}

int main()
{
	Stack s;
	s.pop();
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);
	s.display();
	s.peek();
	s.pop();
	s.peek();
	s.display();

	return 0;
}
