#include <iostream>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create()
{
	int x;
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));

	std::cout << "Enter data or (-1 for no node)" << std::endl;
	std::cin >> x;

	if(x == -1)
	{
		return 0;
	}

	newnode->data = x;

	std::cout << "Enter Left child " << std::endl;
	newnode->left = create();

	std::cout << "Enter right child " << std::endl;
	newnode->right = create();

	return newnode;
}


void preOrder(struct node *root)
{
	if(root == 0)
	{
		return;
	}
	std::cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);

}

void inOrder(struct node *root)
{
	if(root == 0)
	{
		return;
	}
	inOrder(root->left);
	std::cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(struct node *root)
{
	if(root == 0)
	{
		return;
	}	
	postOrder(root->left);
	postOrder(root->right);
	std::cout << root->data << " ";
}

int main()
{
	struct node *root;
	root = 0;
	root = create();

	std::cout << "preorder is : ";
	preOrder(root);

	std::cout << "\n";

	std::cout << "inorder is : ";
	inOrder(root);

	std::cout << "\n";

	std::cout << "postorder is : ";
	postOrder(root);

  






	return 0;
}