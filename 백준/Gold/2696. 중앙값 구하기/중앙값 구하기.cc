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
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		priority_queue<int> pq;
		vector<int> ans;
		int sum = 0;
		for (int j = 1; j <= b; j++) {
			int c;
			cin >> c;
			pq.push(c);
			if (j % 2 == 1) {
				sum = j / 2;
				vector<int> v;
				for (int k = 0; k < sum; k++) {
					v.push_back(pq.top());
					pq.pop();
				}
				ans.push_back(pq.top());
				for (int k = 0; k < v.size(); k++) {
					pq.push(v[k]);
				}
			}
		}
		cout << ans.size() << "\n";
		for (int j = 0; j < ans.size(); j++) {
			cout << ans[j] << " ";
			if ((j + 1) % 10 == 0) {
				cout << "\n";
			}
		}
		cout << "\n";
	}
	return 0;
}