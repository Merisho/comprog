#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, x;
		cin >> n >> x;

		vector<ll> a(n);
		vector<ll> ps(n + 1, 0);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			ps[i + 1] = ps[i] + a[i];
		}

		ll mk = 1e9;
		int mi = -1;
		for (int i = 0; i < n; ++i) {
			ll ai = a[i];
			ll k = 0;
			while (ai % x == 0) {
				ai /= x;
				++k;
			}

			if (k < mk) {
				mi = i;
				mk = k;
			}
		}

		ll ans = ps[n] + ps[n] * mk + ps[mi];

		cout << ans << endl;
	}
	
	return 0;
}
