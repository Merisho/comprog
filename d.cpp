#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		int m = n / 2;

		vector<int> a(n);
		for (int i = 0; i < m; ++i) {
			cin >> a[i];
		}

		long long s = 0;
		for (int i = 0; i < m; ++i) {
			cin >> a[i + m];
			s += a[i] + a[i + m];
		}

		int av = s * 2 / n;
		int c = 0;
		for (int i = 0; i < m; ++i) {
			int mx = max(a[i], a[n - i - 1]);
			int mn = min(a[i], a[n - i - 1]);
			int aa = a[i] + a[n - i - 1];
			if (aa == av) {
				continue;
			}

			if (av - aa > 0 && av - mx <= k || av - aa < 0 && av - mn > 0) {
				++c;
			} else {
				c += 2;
			}
		}

		cout << c << endl;
	}
	
	return 0;
}
	