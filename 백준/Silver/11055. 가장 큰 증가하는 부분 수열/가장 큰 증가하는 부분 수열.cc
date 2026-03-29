#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	vector<int> v(a);
	vector<int> dps(a, 0);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
		dps[i] = v[i];
	}
	vector<int> dp(a, 1);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i]) {
				dps[i] = max(dps[i], dps[j] + v[i]);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < a; i++) {
		ans = max(ans, dps[i]);
	}
	cout << ans;
	return 0;
}