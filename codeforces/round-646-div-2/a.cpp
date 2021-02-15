#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, x;
		cin >> n >> x;

		int o = 0;
		int e = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a % 2 == 1) {
				++o;
			} else {
				++e;
			}
		}

		bool ok = false;
		if (x <= o) {
			ok = x % 2 == 1 || e > 0;
		} else if (o > 0) {
			x -= o;
			if (o % 2 == 0) {
				++x;
			}

			ok = x <= e;
		}

		cout << (ok ? "Yes" : "No") << endl;
	}
	
	return 0;
}
	