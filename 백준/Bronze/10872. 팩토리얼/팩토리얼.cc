#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum *= i;
	}
	cout << sum;
}