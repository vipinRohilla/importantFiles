#include <iostream>
using namespace std;


struct node{
	int data;
	struct node *next;
};


int main(){
	int item, n, count = 0, i = 1;
	cout << "Enter the number of nodes : ";
	cin >> n;

	cout << "Enter the data : ";
	cin >> item;
//to make a first node of linked list
	struct node *head, *newnode, *temp;

	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->next = NULL;

	head = temp = newnode;
//to make a next nodes in linked list
	for(int i = 1; i < n; i++){
	cout << "Enter the data : ";
	cin >> item;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->next = NULL;

	temp->next = newnode;
	temp = temp->next;


}

//these instructions are used for printing the linked list
temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}


//program to enter the data at starting position;

cout << "\n";

cout << "Enter the element which you want to enter at the begining : ";
cin >> item;

newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = item;
newnode->next = head;
head = newnode;


//these instructions are used for printing the linked list
temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}


//program to insert a value in linked list at the end;
cout << "\n";

cout << "Enter the element which you want to add at the end : ";
cin >> item;
newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = item;
newnode->next = NULL;
temp = head;
while(temp->next != NULL){
temp = temp->next;
}

temp->next = newnode;

temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
	count++;
}

cout << "\n";

cout << "Size of the linked list : " << count << endl;

//insert the data at any given postion given by user;
int position;
newnode = (struct node *)malloc(sizeof(struct node));
cout << "Enter the position : ";
cin >> position;

if(position > count){
	cout << "Invalid position";
}
else{
	temp = head;
	while(i < position){
	temp = temp->next;
	i++;
	}
	cout << "Enter the data : ";
	cin >> newnode->data;
	newnode->next = temp->next;
	temp->next = newnode;
}

temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

cout << "\n";

//program to delete the first element in the list;
cout << "Want to delete the first element (Yes -> 1, NO -> 0) : ";
int garbageNumber;
cin >> garbageNumber;
if(garbageNumber == 1){
	if(head == NULL){
	cout << "List is Empty";
	}
	else{
	temp = head;
	head = head->next;
	free(temp);
	}

	temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}
}
else{
	temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

}
cout << "\n";

//program to delete the last element from the linked list
cout << "Want to delete the last element (Yes -> 1, NO -> 0) : ";
cin >> garbageNumber;

if(garbageNumber == 1){
	struct node *prevnode;
	temp = head;
	while(temp->next != NULL){
	prevnode = temp;
	temp = temp->next;
}
	if(temp == head)
	{
	head = NULL;
}
	else{
	prevnode->next = NULL;
}
free(temp);

temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

}
else
{
	temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

}

cout << "\n";


//program to delete the element from the specific position;
cout << "do you want to delete the element from specific position (Yes -> 1, NO -> 0) : ";
cin >> garbageNumber;
if(garbageNumber == 1){

	cout << "Enter the positon from where you want to delete the element : ";
cin >> position;
i = 1;
struct node *nextnode;
temp = head;
while(i < position-1 ){
	temp = temp->next;
	i++;
}
nextnode = temp->next;
temp->next = nextnode->next;
free(nextnode);


temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

}
else{
	temp = head;

cout << "\n";

while(temp != NULL){

	cout << temp->data << "\t";
	temp = temp->next;
}

}
cout << "\n";

cout << "Do you want to reverse the linked list (yes->1,No->0) : ";
cin >> garbageNumber;

cout << "\n";
cout << "This is reverse linked list";
cout << "\n";

struct node *prev_node, *current_node, *next_node;

if (garbageNumber == 1){
	prev_node = 0;
	current_node = next_node = head;
	while(next_node != 0){

		next_node = next_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;

	}
		head = prev_node;

		temp = head;

		cout << "\n";

	while(temp != NULL){

		cout << temp->data << "\t";
		temp = temp->next;
	}


}
else{
		temp = head;

		cout << "\n";

		while(temp != NULL){

			cout << temp->data << "\t";
			temp = temp->next;
		}
	}


	return 0;
}