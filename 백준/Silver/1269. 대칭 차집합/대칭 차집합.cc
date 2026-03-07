#include <iostream>
#include <set>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	set<int> s, s1;
	set<int> v;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		s.insert(c);
		s1.insert(c);
	}

	for (int i = 0; i < b; i++) {
		int c;
		cin >> c;
		if (s.count(c)) {
			s.erase(c);
		}
		v.insert(c);
	}
	for (auto it = s1.begin(); it != s1.end(); it++) {
		if (v.count(*it)) {
			v.erase(*it);
		}
	}
	int count = 0;
	count = s.size() + v.size();
	cout << count;
	return 0;
}