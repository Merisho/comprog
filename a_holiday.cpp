#include <bits/stdc++.h>
using namespace std;

int main() {
	string week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	string d;
	cin >> d;

	int i = 0;
	while (week[i] != d) ++i;

	cout << 7 - i;
	
	return 0;
}
	