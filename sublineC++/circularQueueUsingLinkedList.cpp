#include <iostream>

struct node
{
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

	if(rear == 0)
	{
		front = rear = newnode;
		rear->next = front;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
		rear->next = front;
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
	 else if(front == rear)
	 {
	 	front = rear = 0;
	 	free(temp); 
	 }
	 else
	 {
	 	front = front->next;
	 	rear->next = front;
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

	if(front == 0 && rear == 0)
	{
		std::cout << "Queue is Empty";
	}
	else
	{
		while(temp != rear)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
			std::cout << temp->data << " ";
	}
	
}

int main()
{

	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	display();
	std::cout << "\n";

	dequeue();
	dequeue();
	dequeue();
	display();
















	return 0;
}