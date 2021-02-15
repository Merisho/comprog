#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, x;
		cin >> n >> x;

		vector<int> a(n + 1, 0);
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		int ans = 1;
		for (int i = 0; i < n; ++i) {
			int d = a[i + 1] - a[i] - 1;
			if (d < 1) {
				ans = a[i + 1];
				continue;
			}

			if (d > x) {
				ans = a[i] + x;
				x = 0;
				break;
			}

			x -= d;
			ans = a[i + 1];
		}

		ans += x;

		cout << ans << endl;
	}
	
	return 0;
}
	