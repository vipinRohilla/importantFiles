#include <iostream>
#define N 5
int stack_1[N], stack_2[N];
int top_1 = -1, top_2 = -1;

int count = 0;

void push_1(int x)
{
	if(top_1 == N-1)
	{
		std::cout << "Queue is Full";
	}
	else
	{
		top_1++;
		stack_1[top_1] = x;
	}
}

void push_2(int x)
{
	if(top_2 == N-1)
	{
		std::cout << "Queue is Full";
	}
	else
	{
		top_2++;
		stack_2[top_2] = x;
	}
}

int pop_1()
{
	return stack_1[top_1--];
}

int pop_2()
{
	return stack_2[top_2--];
}

void enqueue(int x)
{
	push_1(x);
	count++;
}

void dequeue()
{
	if(top_1 == -1 && top_2 == -1)
	{
		std::cout << "queue is Empty";
	}
	else
	{
		for(int i = 0; i < count; i++)
		{
			int a = pop_1();
			push_2(a);
		}
		pop_2();
		count--;

		for(int i = 0; i < count; i++)
		{
			int b = pop_2();
			push_1(b);
		}
		
	}
}

void display()
{
	for(int i = 0; i <= top_1; i++)
	{
		std::cout << stack_1[i] << " ";
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