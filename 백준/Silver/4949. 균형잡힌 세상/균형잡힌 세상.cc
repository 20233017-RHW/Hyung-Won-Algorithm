#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (1) {
		string a;
		stack<char> s;
		getline(cin, a);
		bool check = true;
		if (a == ".") {
			break;
		}
		else {
			for (int i = 0; i < a.size(); i++) {
				if (a[i] == '(' || a[i] == '[') {
					s.push(a[i]);
				}
				else if (a[i] == ')') {
					if (s.empty() || s.top() != '(') {
						check = false;
						break;
					}
					s.pop();
				}
				else if (a[i] == ']') {
					if (s.empty() || s.top() != '[') {
						check = false;
						break;
					}
					s.pop();
				}
			}
			if (!s.empty()) {
				check = false;
			}
			if (check == false) {
				cout << "no" << "\n";
			}
			else {
				cout << "yes" << "\n";
			}
		}
	}
	return 0;
}