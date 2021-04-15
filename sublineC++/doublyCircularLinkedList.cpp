#include <iostream>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head, *tail, *temp;

void createDoublyCircularLinkedList()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	head = NULL;
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;
	if(head == NULL)
	{
		head = tail = newnode;
		head->next = head;
		head->prev = head;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		newnode->next = head;
		head->prev = newnode;
		tail = newnode;
	}
}

void joinDoublyCircularLinkedList()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;
	if(head == NULL)
	{
		head = tail = newnode;
		head->next = head;
		head->prev = head;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		newnode->next = head;
		head->prev = newnode;
		tail = newnode;	
	}
}

int getLength()
{
	int length = 0;
	struct node *temp;
	temp = head;
	while(temp != tail)
	{
		temp = temp->next;
		length++;
	}
	length++;
	return length;

}

void insertAtBegining()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;
	if(head == NULL)
	{
		head = tail = newnode;
		newnode->prev = tail;
		newnode->next = head;
	}
	else
	{
		std::cout << "Insert at begining : ";
		newnode->next = head;
		head->prev = newnode;
		newnode->prev = tail;
		tail->next = newnode;
		head = newnode;
	}

}

void insertAtEnd()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	std::cout << "Enter the data : ";
	std::cin >> newnode->data;
	if(head == NULL)
	{
		head = tail = newnode;
		newnode->prev = tail;
		newnode->next = head;
	}
	else
	{
		std::cout << "Insert at end : ";
		newnode->prev = tail;
		tail->next = newnode;
		newnode->next = head;
		head->prev = newnode;
		tail = newnode;
	}
}

void insertAtGivenPosition()
{
	int position, i = 1;
	std::cout << "Enter the position : ";
	std::cin >> position;
	int l = getLength();
	temp = head;
	struct node *newnode;
	if(position < 0 || position > l)
	{
		std::cout << "invalid position";
	}
	else if(position == 1)
	{
		insertAtBegining();
	}
	else
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		std::cout << "Enter the data at given position : ";
		std::cin >> newnode->data;
		
		while(i < position-1)
		{
			temp = temp->next;
			i++;
		}
		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next->prev = newnode;
		temp->next = newnode;
	}

}

void deleteFromBegining()
{
	temp = head;
	if(head == NULL)
	{
		std::cout << "List is Empty";
	}
	else if(head->next == head)
	{
		head = tail = NULL;
		free(temp);
	}
	else
	{
		std::cout << "Delete from the begining : ";
		head = head->next;
		head->prev = tail;
		tail->next = head;
		free(temp);
	}
}

void deleteFromEndPosition()
{
	struct node *extra;
	extra = tail;
	if(tail == NULL)
	{
		std::cout << "List is Empty";
	}
	else if(tail->next == tail)
	{
		std::cout <<"elseif";
		head = tail = NULL;
		free(extra);
	}
	else
	{
		std::cout << "Delete from the end : ";
		tail = tail->prev;
		tail->next = head;
		head->prev = tail;
		free(extra); 
	}
}

void deleteFromGivenPosition()
{
	int position, i = 1,l;
	std::cout << "Enter the position from where you want to delete the element : ";
	std::cin >> position;
	l = getLength();
	if(position < 1 || position >l)
	{
		std::cout << "Invalid position";
	}
	else if(position == 1)
	{
		deleteFromBegining();
	}
	else
	{
		while(i < position+1)
		{
			temp = temp->next;
			i++;
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		if(temp->next == head)
		{
			tail = temp->prev;
			free(temp);
		}
		else
		{
			free(temp);
		}
	}
}

void display()
{
	if(head == NULL)
	{
		std::cout <<"Empty";
	}
	else
	{
		temp = head;
		while(temp != tail)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << temp->data << " ";
	}
	std::cout << "\n";
}


int main()
{
	createDoublyCircularLinkedList();
	int numberOfNodes;
	std::cout << "How many more nodes you want to join : ";
	std::cin >> numberOfNodes;

	//Loop for joining more nodes in the circular linked list
	for(int i = 1; i < numberOfNodes+1; i++)
	{
		joinDoublyCircularLinkedList();
	}
	display();

	std::cout << getLength();
	std::cout << "\n";

	insertAtBegining();
	display();
	std::cout << getLength();
	std::cout << "\n";

	insertAtEnd();
	display();
	std::cout << getLength();
	std::cout << "\n";

	insertAtGivenPosition();
	display();
	std::cout << getLength();
	std::cout << "\n";

	deleteFromBegining();
	display();

	deleteFromEndPosition();
	display();

	deleteFromGivenPosition();
	display();









	return 0;
}