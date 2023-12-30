#include <iostream>
using namespace std;

class Queue
{
private:
	int num = 5;
	int front = -1;
	int rear = -1;
	int *queueArray{};

public:
	Queue();
	void peekQueue();
	void enQueue(int val);
	void deQueue();
	void displayQueue();
};

Queue::Queue()
{
	queueArray = new int[num];
}
void Queue::enQueue(int val)
{
	if (rear >= 4)
	{
		cout << "Queue is overflow" << endl;
	}
	else if (front > -1)
	{
		rear++;
		queueArray[rear] = val;
	}
	else
	{
		rear++;
		front++;
		queueArray[rear] = val;
	}
};

void Queue::deQueue()
{
	if (front == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else if (front == rear)
	{
		cout << queueArray[front] << " is out of the Queue and Queue is empty now" << endl;
		front = rear = -1;
	}
	else
	{
		cout << queueArray[front++] << " is out of the Queue" << endl;
	}
}

void Queue::peekQueue()
{
	cout << queueArray[front] << " is in the front of the queue" << endl;
}

void Queue::displayQueue()
{
	for (int i = 0; i < 5; i++)
	{
		cout << queueArray[i] << ", ";
	}
	cout << "" << endl;
}

int main()
{
	int input;
	cout << "1 push value to Queue " << endl;
	cout << "2 pop value from Queue " << endl;
	cout << "3 peek value from Queue " << endl;
	cout << "4 display Queue" << endl;
	cout << "5 Terminate the program" << endl;

	Queue obj;
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
			obj.enQueue(val);
			break;
		case 2:
			obj.deQueue();
			break;
		case 3:
			obj.peekQueue();
			break;
		case 4:
			obj.displayQueue();
			break;
		case 5:
			cout << "Catch you later" << endl;
			break;
		default:
			cout << "Enter a valid option" << endl;
			break;
		}
	} while (input != 5);
	return 0;
}