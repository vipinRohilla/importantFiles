#include <iostream>
#define N 5
int circularQueue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
	if(front == -1 && rear == -1)
	{
		front = rear = 0;
		circularQueue[rear] = x;
	}
	else if(((rear+1)%N) == front)
	{
		std::cout << "circularQueue is Full";
	}
	else
	{
		rear = (rear+1)%N;
		circularQueue[rear] = x;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		std::cout << "circularQueue is Empty" << " ";
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front = (front+1)%N;
	}
}

void peek()
{
	std::cout << circularQueue[front];
}

void display()
{
	int i = front;
	if(front == -1 && rear == -1)
	{
		std:: cout << "Queue is Empty";
	}
	else
	{
		while(i != rear)
		{
			std::cout << circularQueue[i] << " ";
			i = (i+1)%N;
		}
		std::cout << circularQueue[rear] << " ";
	}
	
}

int main()
{
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	display();

	std::cout << "\n";

	dequeue();
	dequeue();

	display();
	std::cout << "\n";
	enqueue(1);
	enqueue(6);

	display();
	std::cout << "\n";
	peek();







	return 0;
}