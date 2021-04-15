#include <iostream>

struct node{
	int data;
	struct node *next;
};
struct node *top = 0;

void push(int x)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = top;
	top = newnode;
}

void peek()
{
	if(top == 0)
	{
		std::cout << "List is Empty";
	}
	else
	{
		std::cout << top->data;
	}
}

void pop()
{
	if(top == 0)
	{
		std::cout << "List is Empty";
	}
	else
	{
		struct node *temp;
		temp = top;
		top = top->next;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp = top;
	if(top == 0)
	{
		std::cout << "List is Empty";
	}
	else
	{
		while(temp != 0)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}	
	}
	
}

int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	display();
	std::cout << "\n";

	peek();
	std::cout << "\n";

	pop();
	display();
	std::cout << "\n";
	
	pop();
	display();
















	return 0;
}