#include <iostream>
using namespace std;

struct node{
	struct node *prev;
	int data;
	struct node *next;
	
};

int main(){
	int garbageNumber;
	int n; //number of nodes
	cout << "Enter the number of node : ";
	cin >> n;
	struct node *head, *newnode, *temp, *tail;
	head = NULL;
	newnode = (struct node *)malloc(sizeof(struct node));
	cout << "Enter the value : " ;
	cin >> newnode->data;
	newnode->prev = NULL;
	newnode->next = NULL;

		if (head == NULL){
		head = temp = tail = newnode;
		}
		
			for(int i = 1; i < n; i++)
			{

			newnode = (struct node *)malloc(sizeof(struct node));
			cout << "Enter the value : " ;
			cin >>newnode->data;
			newnode->prev = NULL;
			newnode->next = NULL;


			temp->next = newnode;
			tail->next = newnode;
			newnode->prev = temp;
			newnode->prev = tail;
			temp = newnode;
			tail = newnode;


		}

	cout << "\n";
	temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

	cout << "Do you want to reverse the list(Yes->1, No->0) : ";
	cin >> garbageNumber;

	if(garbageNumber == 1)
	{
		temp = newnode;


	if(temp != head){
		while(temp != head){
			cout << temp->data << " ";
		temp = temp->prev;

		}

	}
	if(temp == head){
		cout << temp->data << " ";

	}


	}
	else
	{
		cout << "\n";
		temp = head;
		while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

	}

	

//program to insert the element at begining of the linked list;

	cout << "\n";
	cout << "Enter the value at begining : ";
	newnode = (struct node *)malloc(sizeof(struct node));
	cin >> newnode->data;
	newnode->prev = NULL;
	head->prev = newnode;
	newnode->next = head;
	head = newnode;

	//print the list
	temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

//program for enter the value at the end of the list;

	cout << "Enter the value at the end : ";
	newnode = (struct node *)malloc(sizeof(struct node));
	cin >> newnode->data;
	newnode->prev = NULL;
	newnode->next = NULL;

	if(head == NULL)
	{
		head = tail = newnode;
	}
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}

	temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

//program for enter a value at specific position;
	temp = head;
	int position, i = 1;
	cout << "Enter the position where you want to enter the data in list : ";
	cin >> position;
	newnode = (struct  node *)malloc(sizeof(struct node));
	cin >> newnode->data;
	while(i < position-1)
	{
		temp = temp->next;
		i++;
	}

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;

	temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

//program for delete the element from the list from the starting;
	cout << "Do you want to delete the first element(Yes->1, No->0) : ";
	cin >> garbageNumber;


	if(garbageNumber == 1){
			if(head == NULL)
	{
		cout << "Empty";
	}
	else
	{
		temp = head;
		head = head->next;
		head->prev = NULL;
		free(temp);
	}

	temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

	}
	else
	{
		temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";

	}

//program for delete the element from last position;
	tail = temp = head;
	while(tail->next != NULL)
	{
		tail = tail->next;
	}

	cout << "Do you want to delete the last element (Yes->1, No->0) : ";
	cin >> garbageNumber;
	if(garbageNumber == 1)
	{
		if(tail == NULL)
		{
			cout << "Empty";

		}
		else
		{
			temp = tail;
			tail->prev->next = NULL;
			tail = tail->prev;
			free(temp);

			temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";


		}
	}
	else
	{
		temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";

	}

//program for delete the element from the specific position;
	temp = head;
	i = 1;
	cout << "Enter the position where you want to delete the data in list : ";
	cin >> position;
	newnode = (struct  node *)malloc(sizeof(struct node));

	while(i < position)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	temp = head;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";

//program for reverse the linked list;
	cout << "Do you want to reverse the linked list(Yes->1, NO->0) : ";
	cin >> garbageNumber;
	if(garbageNumber == 1)
	{
		struct node *current, *nextnode;
	current = head;
	while(current != NULL)
	{
		nextnode = current->next;
		current->next = current->prev;
		current->prev = nextnode;
		current = nextnode;
	}
		current= head;
		head = tail;
		tail = current;



		temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";

	}
	else
	{

		temp = head;
		while(temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
			cout << "\n";



	}





















	return 0;
}