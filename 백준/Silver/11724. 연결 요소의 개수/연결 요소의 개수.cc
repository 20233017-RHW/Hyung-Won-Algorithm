#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1001];
bool visited[1001];

void bfs(int start) {
	queue<int> q;
	visited[start] = true;
	q.push(start);

	while (!q.empty()) {
		int k = q.front();
		q.pop();

		for (int i = 0; i < v[k].size(); i++) {
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
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;
	int count = 0;

	for (int i = 0; i < b; i++) {
		int n, m;
		cin >> n >> m;
		v[n].push_back(m);
		v[m].push_back(n);
	}
	for (int i = 1; i <= a; i++) {
		if (visited[i] == 0) {
			bfs(i);
			count++;
		}
	}
	cout << count;
	return 0;
}