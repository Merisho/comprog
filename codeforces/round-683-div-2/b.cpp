#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		int x = 0;
		int neg = 0;
		int mn = 101;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int a;
				cin >> a;

				x += abs(a);

				mn = min(mn, abs(a));
				if (a < 0) {
					++neg;
				}
			}
		}

		if (neg % 2 == 0) {
			mn = 0;
		}

		cout << (x - 2 * mn) << endl;
	}
	
	return 0;
}
