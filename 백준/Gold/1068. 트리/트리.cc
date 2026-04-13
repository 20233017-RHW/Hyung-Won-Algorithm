#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

bool visited[51];
int cnt = 0;

class Node {
public:
	int data;
	vector<Node*> children;

	Node(int val) {
		data = val;
	}
};

void bfs(Node* start)
{
	if (!start) {
		return;
	}
	queue<Node*> q;
	visited[start->data] = true;
	q.push(start);
	while (!q.empty()) {
		Node* cur = q.front();
		q.pop();

		bool hasChild = false;
		for (Node* child : cur->children) {
			if (child && !visited[child->data]) {
				visited[child->data] = true;
				q.push(child);
				hasChild = true;
			}
		}
		if (!hasChild) {
			cnt++;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	map<int, Node*> nodes;
	Node* root = nullptr;

	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		
		if (nodes.find(i) == nodes.end()) {
			nodes[i] = new Node(i);
		}

		if (b == -1) {
			root = nodes[i];
		}
		else {
			if (nodes.find(b) == nodes.end()) {
				nodes[b] = new Node(b);
			}
			nodes[b]->children.push_back(nodes[i]);
		}
	}
	int c;
	cin >> c;
	for (auto& p : nodes) {
		auto& vec = p.second->children;
		for (auto it = vec.begin(); it != vec.end();) {
			if ((*it)->data == c) {
				it = vec.erase(it);
			}
			else {
				++it;
			}
		}
	}
	if (root && root->data == c) {
		root = nullptr;
	}
	delete nodes[c];
	nodes.erase(c);
	bfs(root);
	cout << cnt;
	return 0;
}