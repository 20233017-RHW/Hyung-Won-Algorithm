#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		priority_queue<int> pq;
		queue<pair<int, int>> q;
		int n, m;
		cin >> n >> m;
		int cnt = 0;

		for (int j = 0; j < n; j++) {
			int k;
			cin >> k;
			q.push({ j, k });
			pq.push(k);
		}
		while (1) {
			auto cur = q.front();
			q.pop();
			if (cur.second == pq.top()) {
				pq.pop();
				cnt++;
				if (cur.first == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push(cur);
			}
		}
	}
	return 0;
}