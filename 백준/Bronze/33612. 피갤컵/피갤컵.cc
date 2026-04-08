#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int year = 2024;
	int month = 8;
	for (int i = 1; i < a; i++) {
		month += 7;
		if (month > 12) {
			year++;
			month -= 12;
		}
	}
	cout << year << " " << month;
	return 0;
}