#include <iostream>
#include <map>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

Node* insert(Node* root, int val) {
	if (root == NULL) {
		return new Node(val);
	}
	if (val < root->data) {
		root->left = insert(root->left, val);
	}
	else {
		root->right = insert(root->right, val);
	}
	return root;
}

void outorder(Node* root)
{
	if (root == NULL) {
		return;
	}
	outorder(root->left);
	outorder(root->right);
	cout << root->data << " ";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int a, parent;
	cin >> parent;
	Node* root = new Node(parent);
	while (cin >> a)
	{
		root = insert(root, a);
	}
	outorder(root);
	return 0;
}