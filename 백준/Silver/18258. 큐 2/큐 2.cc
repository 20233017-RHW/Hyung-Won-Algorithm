#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	queue<int> q;
	for (int i = 0; i < a; i++) {
		string c;
		cin >> c;
		if (c == "push") {
			int b;
			cin >> b;
			q.push(b);
		}
		else if (c == "pop") {
			if (!q.empty()) {
				int b = q.front();
				cout << b << "\n";
				q.pop();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (c == "size") {
			cout << q.size() << "\n";
		}
		else if (c == "empty") {
			if (!q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << 1 << "\n";
			}
		}
		else if (c == "front") {
			if (!q.empty()) {
				int b = q.front();
				cout << b << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (c == "back") {
			if (!q.empty()) {
				int b = q.back();
				cout << b << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
	return 0;
}