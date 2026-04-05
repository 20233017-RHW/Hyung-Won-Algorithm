#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec[100001];
bool visited[100001];
int arr[100001];
int cnt = 1;

void bfs(int start)
{
	queue<int> q;
	visited[start] = true;
	q.push(start);

	while (!q.empty()) {
		int k = q.front();
		q.pop();
		arr[k] = cnt;
		cnt++;
		for (int i = 0; i < vec[k].size(); i++) {
			int r = vec[k][i];
			if (visited[r] == false) {
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

	int n, m, start;
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end(), [](int a, int b) {
			return a > b;
		});
	}
	bfs(start);
	for (int i = 1; i <= n; i++) {
		if (visited[i] == false) {
			cout << 0 << "\n";
		}
		else {
			cout << arr[i] << "\n";
		}
	}
	return 0;
}