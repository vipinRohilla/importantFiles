#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
	
};

int main(){
	int i, n, item;
	struct node *head , *newnode, *temp;
	head = NULL;

	cout << "Enter the number of nodes : ";
	cin >> n;

	cout << "Enter the value of the head node : " ;
	cin >> item;

	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->next = NULL;

	head = newnode;

	temp = head;

	for(i=1; i < n ; i++){

		cout << "Enter the value of the next node : ";
		cin >> item;

		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = item;
		newnode->next = NULL;

		temp->next = newnode;
		temp = temp->next;


	}

	cout << "\n";

	temp = head;

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}


	return 0;
}