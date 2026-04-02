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
		int k = vec[start][i];
		if (visited[k] == false) {
			dfs(k);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, start;
	cin >> a >> b >> start;
	for (int i = 0; i < b; i++) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	for (int i = 0; i < a; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	dfs(start);
	for (int i = 1; i <= a; i++) {
		if (visited[i] == false) {
			cout << 0 << "\n";
		}
		else {
			cout << arr[i] << "\n";
		}
	}
	return 0;
}