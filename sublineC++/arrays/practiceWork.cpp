#include <iostream>

struct node
{
	int data;
	struct node *next;
};

struct node *head, *temp;

void createLinkedList()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	head = NULL;
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;
	newnode->next = NULL;

	head = temp = newnode;
}

void joinMoreNodesInLinkedList()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;

	if(head == NULL)
	{
		head = temp = newnode;
	}
	else
	{
		temp->next = newnode;
		temp = temp->next;
	}
}

void display()
{
	temp = head;
	while(temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	int arr[50];
	int size;
	std::cout << "Enter size of array less than 40 : ";
	std::cin >> size;
	for(int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	//insert at begining
	std::cout << "insert at begining : ";
	int item;
	std::cin >> item;
	for(int i = size-1; i >= 0; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[0] = item;
	size++;

	//display
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	//insert at last
	std::cout << "insert at last : ";
	int itemAtLast;
	std::cin >> itemAtLast;
	arr[size] = itemAtLast;
	size++;

	//display
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	//insert at given position
	std::cout << "Enter the position : ";
	int position;
	std::cin >> position;
	std::cout << "Enter element : ";
	int itemAtGivenPosition;
	std::cin >> itemAtGivenPosition;
	for(int i = size-1; i >= position-1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[position-1] = itemAtGivenPosition;
	size++;

	//display
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";




	//linked Lists

	//singly linked list

	createLinkedList();
	joinMoreNodesInLinkedList();
	joinMoreNodesInLinkedList();
	joinMoreNodesInLinkedList();
	joinMoreNodesInLinkedList();
	joinMoreNodesInLinkedList();

	display();


















	return 0;
}