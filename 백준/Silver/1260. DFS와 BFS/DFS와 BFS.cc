#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> adj[10001];
bool visited[10001];

vector<int> v[10001];
bool visit[10001];

void dfs(int t) {
	visited[t] = true;
	cout << t << " ";
	for (int i = 0; i < adj[t].size(); i++) {
		sort(adj[t].begin(), adj[t].end());
		int u = adj[t][i];
		if (!visited[u]) {
			dfs(u);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	visit[start] = true;
	q.push(start);

	while (!q.empty()) {
		int k = q.front();
		q.pop();
		cout << k << " ";
		for (int i = 0; i < v[k].size(); i++) {
			sort(v[k].begin(), v[k].end());
			int r = v[k][i];
			if(!visit[r]) {
				visit[r] = true;
				q.push(r);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m, w;
	cin >> n >> m >> w;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(w);
	cout << "\n";
	bfs(w);
}