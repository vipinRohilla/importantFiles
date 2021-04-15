#include <iostream>

#define N 5
int deque[N];
int front = -1;
int rear = -1;

void enqueueFront(int x)
{
	if((front == 0 && rear == N-1) || (front == rear+1))
	{
		std::cout << "deque is full";
	}
	else if(front == -1 && rear == -1)
	{
		front = rear = 0;
		deque[front] = x;
	}
	else if(front == 0)
	{
		front = N-1;
		deque[front] = x;
	}
	else
	{
		front--;
		deque[front] = x;
	}
}

void enqueueRear(int x)
{
	if((front == 0 && rear == N-1) || (front == rear+1))
	{
		std::cout << "deque is Full";
	}
	else if(front == -1 && rear == -1)
	{
		front = rear = 0;
		deque[rear] = x;
	}
	else if(rear == N-1)
	{
		rear = 0;
		deque[rear] = x;
	}
	else
	{
		rear++;
		deque[rear] = x;
	}
}

void dequeFront()
{
	if(front == -1 && rear == -1)
	{
		std::cout << "deque is Empty";
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else if(front == N-1)
	{
		front = 0;
	}
	else
	{
		front++;
	}
}

void dequeRear()
{
	if(front == -1 && rear == -1)
	{
		std::cout << "deque is Empty";
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else if(rear == 0)
	{
		rear = N-1;
	}
	else
	{
		rear--;
	}
}

void display()
{
	int i = front;
	while(i != rear)
	{
		std::cout << deque[i];
		i = (i+1)%N;
	}
	std::cout << deque[rear];
}




int main()
{

	enqueueFront(2);
	enqueueFront(3);
	enqueueFront(4);
	enqueueFront(5);

	display();
	std::cout << "\n";

	enqueueRear(6);
	// enqueueRear(7);

	display();

	std::cout <<"\n";

	dequeFront();
	dequeFront();

	display();
	std::cout << "\n";
	
	dequeRear();
	dequeRear();
	display();



















	return 0;
}