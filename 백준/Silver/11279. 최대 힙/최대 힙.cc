#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int cnt;
	cin >> cnt;
	priority_queue<int> pq;
	for (int i = 0; i < cnt; i++) {
		int cs;
		cin >> cs;
		if (cs == 0) {
			if (!pq.empty()) {
				cout << pq.top() << "\n";
				pq.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
		else {
			pq.push(cs);
		}
	}
	return 0;
}