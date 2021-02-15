#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, alarm;
	cin >> n >> alarm;

	int min = 0, max = 0;
	for (int i = 0; i < n; ++i) {
		int low, high;
		cin >> low >> high;

		min += low;
		max += high;
	}

	if (min < alarm && max >= alarm) {
		cout << "Possibly";
	} else if (max < alarm) {
		cout << "Impossible";
	} else if (min >= alarm) {
		cout << "Certainly";
	}
	
	return 0;
}
	