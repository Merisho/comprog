#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> c(n);
		for (int& ci : c) {
			cin >> ci;
		}

		int ans = 1e9;
		for (int j = 1; j <= 100; ++j) {
			int d = 0;
			for (int i = 0; i < n; ++i) {
				if (c[i] != j) {
					++d;
					i += (k - 1);
				}
			}

			ans = min(ans, d);
		}

		cout << ans << endl;
	}
	
	return 0;
}
