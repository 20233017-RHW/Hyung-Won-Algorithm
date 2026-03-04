#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	int sum = 0;
	cin >> a;
	vector<int> v(a + 1, 0);
	vector<int> dp(a + 1, 0);

	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v[i] = c;
	}
	int curmax = 0;
	int glomax = 0;
	curmax = glomax = v[0];
	for (int i = 1; i < a; i++) {
		curmax = max(v[i], curmax + v[i]);
		glomax = max(glomax, curmax);
	}
	cout << glomax;
	return 0;
}