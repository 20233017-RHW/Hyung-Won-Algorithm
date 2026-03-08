
#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isNumber(string s) {
	for (char c : s) {
		if (!isdigit(c))
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	std::cin.tie(0); cout.tie(0);

	int a, b;
	std::cin >> a >> b;
	map<int, string> inm;
	map<string, int> stm;

	for (int i = 1; i <= a; i++) {
		string c;
		std::cin >> c;
		inm[i] = c;
		stm[c] = i;
	}

	for (int i = 1; i <= b; i++) {
		string c;
		std::cin >> c;
		if (isNumber(c)) {
			int q = stoi(c);
			cout << inm[q] << "\n";
		}
		else {
			cout << stm[c] <<"\n";
		}
	}
	return 0;
}