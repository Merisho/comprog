#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll c, d;
		cin >> c >> d;

		if (abs(c - d) % 2 == 1) {
			cout << -1 << endl;
			continue;
		}

		if (c == d) {
			if (c > 0) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
			continue;
		}

		cout << 2 << endl;
	}
	
	return 0;
}
