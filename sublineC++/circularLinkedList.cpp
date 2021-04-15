#include <iostream>
using namespace std;


struct node
{
	int data;
	struct node *next;
};

struct node *head, *temp, *tail; 

void createCircularLinkedList()
{
	struct node *newnode;
	head = NULL;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the data : ";
	cin >> newnode->data;
	newnode->next = NULL;

	if(head == NULL)
	{
		head = temp = newnode;
	}

	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		cout << "Enter the data : ";
		cin >> newnode->data;
		temp->next = newnode;
		temp = newnode;
	}

	temp->next = head;
}

void joinMoreNodes()
{	
	struct node *newnode;

	if(head == NULL)
	{
		head = temp = newnode;
	}
	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		cout << "Enter the data : ";
		cin >> newnode->data;
		temp->next = newnode;
		temp = newnode;
	}
	temp->next = head;	
}

void createCircularLinkedListUsingTail()
{
	struct node *newnode;
	tail = NULL;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the data : ";
	cin >> newnode->data;
	newnode->next = NULL;
	if(tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;
	}
	else
	{	
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}

void joinCircularLinkedListUsingTail()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the data : ";
	cin >> newnode->data;
	newnode->next = NULL;
	if(tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;
	}
	else
	{	
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}

void insertAtBegining()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the data at begining : ";
	cin >>newnode->data; 
	newnode->next = NULL;
	if(tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;
	}
	else
	{
		newnode->next = tail->next;
		tail->next = newnode;
	}
}

void insertAtEnd()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the data at end : ";
	cin >> newnode->data;
	newnode->next = NULL;
	if(tail == NULL)
	{
		tail = newnode;
		tail->next = newnode;

	}
	else
	{
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}

int getLength()
{	
	int length = 0;
	struct node *count;
	count = tail->next;
	while(count != tail)
	{
		count = count->next;
		length++;
	}
	++length;
	return length;
	cout << "\n";
}


void insertAtGivenPosition()
{	
	int l = getLength();
	int i = 1, position;
	struct node *newnode, *temp;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the position where you want to enter the data : ";
	cin >> position;
	if(position < 0 || position > l)
	{
		cout << "invalid position";
	}
	else if(position == 1)
	{
		insertAtBegining();
	}
	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		cout << "Enter the data at given position : ";
		cin >> newnode->data;
		newnode->next = NULL;
		temp = tail->next;
		while(i < position-1)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void deleteFrombegining()
{
	cout << "Delete the first element : ";
	temp = tail->next;
	if (tail == NULL)
	{
		cout << "Empty";
	}
	else if(temp->next == temp)
	{
		tail = NULL;
		free(temp);
	}
	else
	{
		tail->next = temp->next;
		free(temp);
	}
}

void deleteFromEnd()
{	
	struct node *current, *previousnode;
	current = tail->next;
	if(tail == NULL)
	{
		cout << "Empty";
	}
	else if (current->next == current)
	{
		tail = NULL;
		free(current);
	}
	else
	{
		cout << "Delete the last element : ";
		while(current->next != tail->next)
		{
			previousnode = current;
			current = current->next;
		}
		previousnode->next = tail->next;
		tail = previousnode;
		free(current);
	}
}

void deleteFromGivenPosition()
{
	int position, i = 1;
	struct node *current, *nextnode;
	current = tail->next;
	cout <<"Enter the position from where you want to delete the element : ";
	cin >> position;
	int l = getLength();
	if(position < 1 || position > l)
	{
		cout << "Invalid position";
	}
	else if(position == 1)
	{
		deleteFrombegining();
	}
	else
	{
		while(i < position-1)
		{
			current = current->next;
			i++;
		}
		nextnode = current->next;
		current->next = nextnode->next;
		free(nextnode);
	}
}

void display()
{
	if(head == NULL)
	{
		cout <<"Empty";
	}
	else
	{
		temp = head;
		while(temp->next != head)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << temp->data << " ";
	}
	cout << "\n";
}

void displayUsingTail()
{
	if(tail == NULL)
	{
		cout <<"Empty";
	}
	else
	{
		temp = tail->next;
		while(temp->next != tail->next)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << temp->data << " ";
	}	
	cout << "\n";
}

void reverseTheLinkedList()
{
	struct node *current, *previousnode, *nextnode;
	current = tail->next;
	nextnode = current->next;
	if(tail == NULL)
	{
		cout << "List is Empty";
	}
	else if(tail->next == tail)
	{
		cout << "only one node";
	}
	else
	{
		cout << "Reversed linked list : ";
		while(current != tail)
		{
			previousnode = current;
			current = nextnode;
			nextnode = current->next;
			current->next = previousnode;
		}
		nextnode->next = tail;
		tail = nextnode;
	}
}


int main()
{	
	createCircularLinkedList();
	int numberOfNodes;
	cout << "How many more nodes you want to join : ";
	cin >> numberOfNodes;

	//Loop for joining more nodes in the circular linked list
	for(int i = 1; i < numberOfNodes+1; i++)
	{
		joinMoreNodes();
	}
	display();

	cout << "Below one is Circular Linked List using tail.";
	cout <<"\n";

	createCircularLinkedListUsingTail();

	cout << "How many more nodes you want to join : ";
	cin >> numberOfNodes;
	for(int i = 1; i < numberOfNodes+1; i++)
	{
		joinCircularLinkedListUsingTail();
	}

	displayUsingTail();

	insertAtBegining();
	displayUsingTail();

	insertAtEnd();
	displayUsingTail();

	insertAtGivenPosition();
	displayUsingTail();

	deleteFrombegining();
	displayUsingTail();

	deleteFromEnd();
	displayUsingTail();

	deleteFromGivenPosition();
	displayUsingTail();

	reverseTheLinkedList();
	displayUsingTail();



	return 0;
}







