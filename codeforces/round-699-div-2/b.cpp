#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> h(n);
		for (int i = 0; i < n; ++i) {
			cin >> h[i];
		}

		int ans = -1;
		for (int i = 0; i < min(k, 100 * n); ++i) {
			bool w = true;
			for (int j = 0; j < n - 1; ++j) {
				if (h[j] < h[j + 1]) {
					++h[j];
					w = false;
					ans = j + 1;
					break;
				}
			}

			if (w) {
				ans = -1;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
