#include <iostream>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
	if(rear == N-1)
	{
		std::cout << "Overflow";
	}
	else if(front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		rear++;
		queue[rear] = x;
	}

}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		std::cout << "Queue is Empty";
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}
}

void peek()
{
	if(front == -1 && rear == -1)
	{
		std::cout << "List is Empty";
	}
	else
	{
		std::cout << queue[front];
	}
}

void display()
{
	if(front == -1 && rear == -1)
	{
		std:: cout << "Queue is Empty";
	}
	else
	{
		for(int i = front; i <= rear; i++)
		{
			std::cout << queue[i] << " ";
		}
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








	return 0;
}