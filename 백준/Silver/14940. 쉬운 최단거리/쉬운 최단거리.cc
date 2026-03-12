#include <iostream>
#include <queue>
using namespace std;

int mp[1001][1001];
int dist[1001][1001]; 
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, n;
	cin >> n >> m;
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
			dist[i][j] = -1;
			if (mp[i][j] == 2) {
				mp[i][j] = 0;
				dist[i][j] = 0;
				q.push({ i, j });
			}
			else if (mp[i][j] == 0) {
				dist[i][j] = 0;
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

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (mp[nx][ny] == 1 && dist[nx][ny] == -1) {
					dist[nx][ny] = dist[x][y] +1;
					q.push({ nx, ny });
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dist[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}