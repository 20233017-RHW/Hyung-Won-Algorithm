#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

struct Compare {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		return abs(a) > abs(b);
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num;
	cin >> num;
	priority_queue<int, vector<int>, Compare> pq;
	for (int i = 0; i < num; i++) {
		int c;
		cin >> c;
		if (c != 0) {
			pq.push(c);
		}
		else {
			if (!pq.empty()) {
				cout << pq.top() << "\n";
				pq.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
	}
	return 0;
}