#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int a;
	cin >> a;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (b == 0) {
			if (!pq.empty()) {
				cout << pq.top() << "\n";
				pq.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
		else {
			pq.push(b);
		}
	}
	return 0;
}