#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;
	map<string, string> m;

	for (int i = 0; i < a; i++) {
		string c, d;
		cin >> c >> d;
		m[c] = d;
	}
	for (int i = 0; i < b; i++) {
		string c;
		cin >> c;
		if (m.find(c) != m.end()) {
			cout << m[c] << "\n";
		}
	}
	return 0;
}