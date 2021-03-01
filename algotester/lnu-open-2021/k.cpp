#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll x[3], y[3], z[3];
		for (int i = 0; i < 3; ++i) {
			cin >> x[i] >> y[i] >> z[i];
		}

		bool ans = false;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (i == j) {
					continue;
				}

				ll d1 = (x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]) + (z[j] - z[i]) * (z[j] - z[i]);
				ll d2 = -1;
				for (int k = 0; k < 3; ++k) {
					if (k == i || k == j) {
						continue;
					}
					d2 = (x[k] - x[i]) * (x[k] - x[i]) + (y[k] - y[i]) * (y[k] - y[i]) + (z[k] - z[i]) * (z[k] - z[i]);
				}

				if (d1 == d2) {
					ans = true;
					break;
				}
			}
		}

		cout << (ans ? "Yes" : "No") << endl;
	}
	
	return 0;
}
