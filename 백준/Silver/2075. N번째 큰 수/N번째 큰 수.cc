#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	priority_queue<int, vector<int>, greater<int>> pq;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			int b;
			cin >> b;
			if (pq.size() < a) {
				pq.push(b);
			}
			else {
				if (b > pq.top()) {
					pq.pop();
					pq.push(b);
				}
			}
		}
	}
	cout << pq.top();
	return 0;
}