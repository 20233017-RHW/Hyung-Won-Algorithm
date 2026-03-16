#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		priority_queue<int> q;
		priority_queue<int, vector<int>, greater<int>> pq;
		unordered_map<int, int> count;
		for (int j = 0; j < b; j++) {
			char n;
			int m;
			cin >> n >> m;
			if (n == 'I') {
				q.push(m);
				pq.push(m);
				count[m]++;
			}
			else if (n == 'D') {
				if (m == 1) {
					while (!q.empty() && count[q.top()] == 0) {
						q.pop();
					}
					if (!q.empty()) {
						count[q.top()]--;
						q.pop();
					}
				}
				else if (m == -1) {
					while (!pq.empty() && count[pq.top()] == 0) {
						pq.pop();
					}
					if (!pq.empty()) {
						count[pq.top()]--;
						pq.pop();
					}
				}
			}
		}
		while (!q.empty() && count[q.top()] == 0) q.pop();
		while (!pq.empty() && count[pq.top()] == 0) pq.pop();
		if (q.size() == 0 || pq.size() == 0) {
			cout << "EMPTY" << "\n";
		}
		else {
			cout << q.top() << " " << pq.top() << "\n";
		}
	}
	return 0;
}