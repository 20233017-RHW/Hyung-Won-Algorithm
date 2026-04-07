#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


const int INF = 1e9;
bool visited[20001];
int arr[20001];
vector<vector<pair<int, int>>> adj;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;
	int start;
	cin >> start;
	adj.resize(a + 1);

	for (int i = 0; i < b; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ v, w });
	}
	fill(arr, arr + a + 1, INF);
	arr[start] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	pq.push({ 0, start });
	while (!pq.empty()) {
		auto [dist, r] = pq.top();
		pq.pop();

		if (dist > arr[r]) {
			continue;
		}

		for (int i = 0; i < adj[r].size(); i++) {
			int p = adj[r][i].first;
			int q = adj[r][i].second;

			if (arr[p] > arr[r] + q) {
				arr[p] = arr[r] + q;
				pq.push({ arr[p], p });
			}
		}
	}

	for (int i = 1; i <= a; i++) {
		if (i == start) {
			cout << 0 << "\n";
		}
		else if (arr[i] == INF) {
			cout << "INF" << "\n";
		}
		else {
			cout << arr[i] << "\n";
		}
	}
	return 0;
}