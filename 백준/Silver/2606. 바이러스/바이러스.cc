#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> v[101];
bool visited[101];
bool virus[101];

void bfs(int start) {
	queue<int> q;
	visited[start] = true;
	virus[start] = true;
	q.push(start);

	while (!q.empty()) {
		int k = q.front();
		virus[k] = true;
		q.pop();

		for (int i = 0; i < v[k].size(); i++) {
			sort(v[k].begin(), v[k].end());
			int r = v[k][i];
			if (!visited[r]) {
				visited[r] = true;
				q.push(r);
			}
		}
	}
}

int main()
{
	int a, b;
	int count = 0;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int n, m;
		cin >> n >> m;
		v[n].push_back(m);
		v[m].push_back(n);
	}
	bfs(1);
	for (int i = 2; i <= a; i++) {
		if (virus[i] == true) {
			count++;
		}
	}
	cout << count;
	return 0;
}