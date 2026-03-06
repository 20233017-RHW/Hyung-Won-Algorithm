#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int b;
	int count = 0;
	cin >> b;
	map<string, int> m;
	
	for (int i = 0; i < a; i++) {
		string c;
		cin >> c;
		m[c] = 1;
	}

	for (int i = 0; i < b; i++) {
		string c;
		cin >> c;
		auto it = m.find(c);
		if (it != m.end()) {
			count++;
		}
	}
	cout << count;
	return 0;
}