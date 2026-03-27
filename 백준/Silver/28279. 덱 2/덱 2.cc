#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	deque<int> dq;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (b == 1) {
			int c;
			cin >> c;
			dq.push_front(c);
		}
		else if (b == 2) {
			int c;
			cin >> c;
			dq.push_back(c);
		}
		else if (b == 3) {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (b == 4) {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (b == 5) {
			cout << dq.size() << "\n";
		}
		else if (b == 6) {
			if (!dq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << 1 << "\n";
			}
		}
		else if (b == 7) {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (b == 8) {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
	return 0;
}