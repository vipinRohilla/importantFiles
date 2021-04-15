//stack using array or static memory

#include <iostream>
#define N 5

int stack[N];
int top = -1;

void push()
{
	int x;
	std::cout << "Enter the data in stack : ";
	std::cin >> x;
	if(top == N-1)
	{
		std::cout << "Overflow Condition" << std::endl;
	}
	else
	{
		top++;
		stack[top] = x; 
	}
}

void pop()
{
	int item;
	if(top == -1)
	{
		std::cout << "Stack is Empty" << std::endl;
	}
	else
	{
		item = stack[top];
		top--;
		// std::cout << item << " ";
	}
}

void peek()
{
	if (top == -1)
	{
		std::cout << "Stack is Empty" << std::endl;
	}
	else
	{
		std::cout << stack[top] << std::endl;
	}
}

void display()
{	
	for(int i = top; i >=0; i--)
	{
		std::cout << stack[i] << " ";
	}
	
}


int main()
{
	int choice;

	do{
		std::cout << "Enter choice: Push : 1, pop : 2, peek : 3, display : 4" <<std::endl;
		std::cin >> choice;

		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			default: std::cout <<"Invalid choice";						
		}

	}while(choice != 0);


















	return 0;
}