#include <iostream>
#include <queue>

using namespace std;

struct node {
	int N;
	struct node* left;
	struct node* right;
};

struct node* newNode(int N) {
	struct node* temp = new node;
	temp->N = N;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


// Level Order Traversal
void printLevelOrder(struct node* root) {
	if(root == NULL)	return;

	queue<struct node*> q;

	q.push(root);
	
	while(!q.empty()) {
		struct node* temp = q.front();
		cout<<temp->N<<" ";
		q.pop();
		if(temp->left != NULL)	q.push(temp->left);
		if(temp->right != NULL) q.push(temp->right);
	}
}

// Inorder Traversal
void printInorder(struct node* root) {
	if(root == NULL)	return;

	printInorder(root->left);

	cout<<root->N<<" ";

	printInorder(root->right);
}

// Preorder Traversal
void printPreorder(struct node* root) {
	if(root == NULL)	return;

	cout<<root->N<<" ";

	printPreorder(root->left);

	printPreorder(root->right);
}

// Postorder Traversal
void printPostorder(struct node* root) {
	if(root == NULL)	return;

	printPostorder(root->left);

	printPostorder(root->right);

	cout<<root->N<<" ";
}