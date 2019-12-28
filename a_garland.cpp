#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		long long r, g, b;
		cin >> r >> g >> b;

		if (r - g - b > 1 || g - r - b > 1 || b - r - g > 1) {
			cout << "No";
		} else {
			cout << "Yes";
		}

		cout << endl;
	}

	return 0;
}
	