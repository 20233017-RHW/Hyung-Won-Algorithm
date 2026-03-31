#include <iostream>
#include <deque>
#include <vector>
using namespace std;

bool visited[1001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	deque<pair<int, int>> dq;
	vector<int> v;
	int place = 0;
	int move = 0;
	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		int b;
		cin >> b;
		dq.push_back({ i, b });
	}
	while (!dq.empty())
	{
		place = dq.front().first;
		move = dq.front().second;
		dq.pop_front();
		cout << place << " ";
		if (dq.empty()) {
			break;
		}
		if (move < 0) {
			move = move * -1;
			for (int i = 0; i < move; i++) {
				int implace;
				int immove;
				implace = dq.back().first;
				immove = dq.back().second;
				dq.pop_back();
				dq.push_front({ implace, immove });
			}
			place = dq.back().first;
			move = dq.back().second;
		}
		else {
			move--;
			for (int i = 0; i < move; i++) {
				int implace;
				int immove;
				implace = dq.front().first;
				immove = dq.front().second;
				dq.pop_front();
				dq.push_back({ implace, immove });
			}
			place = dq.front().first;
			move = dq.front().second;
		}
		cnt++;
	}
	return 0;
}