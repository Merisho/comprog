#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int prevH;
	int prev = 0;
	int k = 0;
	for (int i = 0; i < n; ++i) {
		int h;
		cin >> h;
		
		if (i == 0) {
			prevH = h;
			continue;
		}

		int d = h - prevH;
		if ((d < 0 && prev < 0) || (d > 0 && prev > 0) || (d == 0 && prev == 0)) {
			prevH = h;
			prev = d;
			continue;
		}

		++k;
		prevH = h;
		prev = d;
	}

	cout << k - 1;
	
	return 0;
}
	