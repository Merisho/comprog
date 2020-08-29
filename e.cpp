#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> c(26, 0);
		for (int i = 0; i < n; ++i) {
			char s;
			cin >> s;
			++c[s - 'a'];
		}

		sort(c.begin(), c.end());

		int ans = 0;
		for (int i = 2; i <= k; ++i) {
			if (k % i == 0) {
				int l = min(i, 26);
				ans = max(ans, c[26 - l] * l);
			}

			while (k % i == 0) {
				k /= i;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
