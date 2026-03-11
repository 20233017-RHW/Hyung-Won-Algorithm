#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];
vector<int> result[100001];
bool visited[100001];

void dfs(int r, int parent) {
	visited[r] = true;
	result[r].push_back(parent);
	for (int i = 0; i < v[r].size(); i++) {
		int t = v[r][i];
		if (visited[t] == false) {
			visited[t] = true;
			dfs(t, r);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	for (int i = 0; i < a - 1; i++) {
		int n, m;
		cin >> n >> m;
		v[n].push_back(m);
		v[m].push_back(n);
	}
	dfs(1, 0);
	for (int i = 2; i <= a; i++) {
		cout << result[i][0] << "\n";
	}
	return 0;
}