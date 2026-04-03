#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec[100001];
bool visited[100001];
int arr[100001];
int cnt = 1;

void dfs(int start)
{
	visited[start] = true;
	arr[start] = cnt;
	cnt++;
	for (int i = 0; i < vec[start].size(); i++) {
		int w = vec[start][i];
		if (visited[w] == false) {
			dfs(w);
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
	dfs(start);
	for (int i = 1; i <= n; i++) {
		if (visited[i] == true) {
			cout << arr[i] << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}
	return 0;
}