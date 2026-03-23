#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a;
	cin >> a;
	map<string, bool> m;
	vector<string> v;
	for (int i = 0; i < a; i++) {
		string b, c;
		cin >> b >> c;
		if (c == "enter") {
			m[b] = true;
		}
		else {
			m[b] = false;
		}
	}
	for (const auto& pair : m) {
		if (pair.second == true) {
			string s = pair.first;
			v.push_back(s);
		}
	}
	for (int i = v.size()-1; i >= 0; i--) {
		cout << v[i] << "\n";
	}
	return 0;
}