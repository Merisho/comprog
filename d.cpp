#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<ll> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<ll> b1;
		vector<ll> b2;
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;

			if (b == 1) {
				b1.push_back(a[i]);
			} else {
				b2.push_back(a[i]);
			}
		}

		sort(b1.begin(), b1.end(), greater<ll>());
		sort(b2.begin(), b2.end(), greater<ll>());

		int ans = 1e9;
		int r = b2.size() - 1;
		ll sb1 = 0;
		ll sb2 = accumulate(b2.begin(), b2.end(), 0LL);
		int l;
		for (l = 0; l <= b1.size(); ++l) {
			while (r >= 0 && sb1 + sb2 - b2[r] >= m) {
				sb2 -= b2[r];
				--r;
			}

			if (sb1 + sb2 >= m) {
				ans = min(ans, 2 * (r + 1) + l);
			}

			if (l < b1.size()) {
				sb1 += b1[l];
			}
		}

		cout << (ans == 1e9 ? -1 : ans) << endl;
	}
	
	return 0;
}
