#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;

		int o = 0;
		int z = 0;
		for (int i = 0; i < n; ++i) {
			char b;
			cin >> b;

			if (b == '0') {
				++z;
			} else {
				++o;
			}
		}

		int ans = 0;
		if (o * h + o * c0 < o * c1) {
			ans += o * h + o * c0;
		} else {
			ans += o * c1;
		}

		if (z * h + z * c1 < z * c0) {
			ans += z * h + z * c1;
		} else {
			ans += z * c0;
		}

		cout << ans << endl;
	}
	
	return 0;
}