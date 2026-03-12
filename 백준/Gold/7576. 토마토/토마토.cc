#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

int tomato[1001][1001];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main()
{
	int n, m;
	cin >> m >> n;
	queue<pair<int, int>> q;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) {
				q.push({ i, j });
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
				if (tomato[nx][ny] == 0) {
					tomato[nx][ny] = tomato[x][y] + 1;
					q.push({ nx, ny });
				}
				else {
					continue;
				}
			}
		}
	}
	int ans = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (tomato[i][j] == 0) {
				cout << -1;
				return 0;
			}
			else {
				ans = max(ans, tomato[i][j]);
			}
		}
	}
	cout << ans -1;
	return 0;
}