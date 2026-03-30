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
	vector<int> dpi(a, 1);
	vector<int> dpd(a, 1);
	vector<int> dpans(a);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i]) {
				dpi[i] = max(dpi[i], dpi[j] + 1);
			}
		}
	}
	for (int i = a-1; i >= 0; i--) {
		for (int j = a-1; j > i; j--) {
			if (v[i] > v[j]) {
				dpd[i] = max(dpd[i], dpd[j] + 1);
			}
		}
	}
	for (int i = 0; i < a; i++) {
		dpans[i] = dpi[i] + dpd[i];
	}
	int ans = 0;
	for (int i = 0; i < a; i++) {
		ans = max(ans, dpans[i]);
	}
	cout << ans-1;
	return 0;
}