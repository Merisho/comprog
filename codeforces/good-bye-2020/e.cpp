#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MOD = 1e9 + 7;

ll f(ll x, ll c) {
	return (x>>c)&1;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> x(n);
		vector<ll> c(60, 0);
		for (int i = 0; i < n; ++i) {
			cin >> x[i];
			
			for (int j = 0; j < 60; ++j) {
				c[j] += x[i] >> j & 1;
			}
		}

		ll ans = 0;
		for (int i = 0; i < n; ++i) {
			ll a = 0;
			ll b = 0;

			for (int j = 0; j < 60; ++j) {
				if ((x[i] >> j & 1) == 1) {
					a += (1LL << j) % MOD * c[j];
					b += (1LL << j) % MOD * n;
				} else {
					b += (1LL << j) % MOD * c[j];
				}
			}

			a %= MOD;
			b %= MOD;
			
			ans = (ans + a * b) % MOD;
		}

		cout << ans << endl;
	}
	
	return 0;
}
