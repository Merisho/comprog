#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		vector<int> p(n + 1, 0);
		for (int i = 1; i <= n; ++i) {
			int ai;
			cin >> ai;

			p[i] = p[i - 1] + ai;
			a[i - 1] = ai;
		}

		int ans = n - 1;
		for (int i = 1; i <= n; ++i) {
			if (p[n] % i != 0) {
				continue;
			}
			
			int sum = p[n] / i;
			int pr = 0;
			bool ok = true;
			for (int j = 1; j <= n; ++j) {
				int s = p[j] - p[pr];
				if (s == sum) {
					pr = j;
				} else if (s > sum) {
					ok = false;
					break;
				}
			}

			if (ok) {
				ans = min(ans, n - i);
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
