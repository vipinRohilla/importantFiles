#include <iostream>

struct node{
	int data;
	struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int x)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = 0;
	if(front == 0 && rear == 0)
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}

}

void dequeue()
{
	struct node *temp;
	temp = front;

	if(front == 0 && rear == 0)
	{
		std::cout << "Queue is Empty";
	}
	else
	{
		front = front->next;
		free(temp);
	}
}

void peek()
{
	if(front == 0 && rear == 0)
	{
		std::cout << "Queue is Empty";
	}
	else
	{
		std::cout << front->data;	
	}
	
}

void display()
{
	struct node *temp;
	temp = front;
	while(temp != 0)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
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

	peek();











	return 0;
}