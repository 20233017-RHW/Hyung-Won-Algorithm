#include <iostream>
#include <map>
using namespace std;

class Node {
public:
	char data;
	Node* left;
	Node* right;

	Node(char val) {
		data = val;

		left = NULL;
		right = NULL;
	}

};

void preorder(Node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data;
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data;
	inorder(root->right);
}

void outorder(Node* root) {
	if (root == NULL) {
		return;
	}
	outorder(root->left);
	outorder(root->right);
	cout << root->data;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	map<char, Node*> nodes;


	char parent, lf, rg;
	char rootChar = 0;
	for (int i = 0; i < a; i++) {
		cin >> parent >> lf >> rg;

		if (nodes.find(parent) == nodes.end()) {
			nodes[parent] = new Node(parent);
		}
		if (rootChar == 0) {
			rootChar = parent;
		}
		if (lf != '.') {
			if (nodes.find(lf) == nodes.end()) {
				nodes[lf] = new Node(lf);
			}
			nodes[parent]->left = nodes[lf];
		}
		if (rg != '.') {
			if (nodes.find(rg) == nodes.end()) {
				nodes[rg] = new Node(rg);
			}
		}
		nodes[parent]->right = nodes[rg];
	}
	Node* root = nodes[rootChar];
	preorder(root);
	cout << "\n";
	inorder(root);
	cout << "\n";
	outorder(root);
	return 0;
}