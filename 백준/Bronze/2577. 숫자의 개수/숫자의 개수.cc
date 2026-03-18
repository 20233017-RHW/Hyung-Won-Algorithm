#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int a, b, c;
	cin >> a >> b >> c;
	int arr[10] = { 0, };
	long long sum = a * b * c;
	string s;
	char d;
	s = to_string(sum);
	for (int i = 0; i < 10; i++) {
		d = i + '0';
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == d) {
				arr[i]++;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}