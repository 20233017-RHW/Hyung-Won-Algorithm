#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
	string kda;
	int arr[3];
	getline(cin, kda);
	
	stringstream ss(kda);
	vector<int> v;
	int num;
	while (ss >> num) {
		v.push_back(num);
		if (ss.peek() == '/') {
			ss.ignore();
		}
	}
	int sum = v[0] + v[2];
	if (sum < v[1] || v[1] == 0) {
		cout << "hasu";
	}
	else {
		cout << "gosu";
	}
	return 0;
}