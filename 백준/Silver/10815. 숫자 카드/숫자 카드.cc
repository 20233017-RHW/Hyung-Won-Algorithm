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
	vector<int> v(a, 0);
	
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v[i] = c;
	}
	sort(v.begin(), v.end());
	int b;
	cin >> b;
	for (int i = 0; i < b; i++) {
		int c;
		cin >> c;
		if (binary_search(v.begin(), v.end(), c)) {
			cout << "1" << " ";
		}
		else {
			cout << "0" << " ";
		}
	}
	return 0;
}