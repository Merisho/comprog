#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, x, y;
		cin >> n >> x >> y;

		int z = y - x;
		int m = 1e9;
		int k;
		for (int i = 1; i < n; ++i) {
			if (z % i != 0) {
				continue;
			}

			int d = z / i;
			int l = (x - 1) / d;
			int mi = n - l - (i + 1);
			if (mi < m) {
				m = mi;
				k = i;
			}
		}

		int d = z / k;
		int e = y + max(m, 0) * d;
		for (int i = 0; i < n; ++i) {
			cout << e << " ";
			e -= d;
		}

		cout << endl;
	}
	
	return 0;
}
