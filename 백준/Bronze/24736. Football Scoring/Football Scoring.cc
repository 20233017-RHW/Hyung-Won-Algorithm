#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < 5; i++) {
		int b;
		cin >> b;
		v2.push_back(b);
	}
	sum1 += v1[0] * 6;
	sum1 += v1[1] * 3;
	sum1 += v1[2] * 2;
	sum1 += v1[3] * 1;
	sum1 += v1[4] * 2;
	sum2 += v2[0] * 6;
	sum2 += v2[1] * 3;
	sum2 += v2[2] * 2;
	sum2 += v2[3] * 1;
	sum2 += v2[4] * 2;
	cout << sum1 << " " << sum2;
	return 0;
}