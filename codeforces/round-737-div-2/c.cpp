#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9 + 7;

ll binexp(ll n, ll e, ll p) {
	if (e == 0) {
		return 1;
	}

	if (e % 2 == 0) {
		ll a = binexp(n, e / 2, p);
		return (a * a) % p;
	}

	return (binexp(n, e - 1, p) * n) % p;
}

ll modinv(ll n, ll p) {
	return binexp(n, p - 2, p);
}

vector<ll> mem_fact(300000, -1);
ll fact(ll n, ll p) {
	mem_fact[0] = 1;
	mem_fact[1] = 1;

	if (mem_fact[n] > -1) {
		return mem_fact[n];
	}

	for (ll i = 2; i <= n; ++i) {
		mem_fact[i] = (mem_fact[i - 1] * i) % p;
	}

	return mem_fact[n];
}

ll choose(ll n, ll k, ll p) {
	ll nf = fact(n, p);
	ll kf = fact(k, p);
	ll df = fact(n - k, p);

	return (((nf * modinv(kf, p)) % p) * modinv(df, p)) % p;
}

int main() {
	ll T;
	cin >> T;

	for (ll test_case = 1; test_case <= T; ++test_case) {
		ll n, k;
		cin >> n >> k;

		ll odd = 0;
		ll even = 0;
		for (ll i = 0; i < n; ++i) {
			if (i % 2 == 0) {
				even = (even + choose(n, i, MOD)) % MOD;
			} else {
				odd = (odd + choose(n, i, MOD)) % MOD;
			}
		}

		ll dp[k + 1][2];
		dp[0][0] = 1;
		dp[0][1] = 0;
		for (ll i = 0; i < k; ++i) {
			dp[i + 1][0] = (dp[i][0] * even) % MOD;
			dp[i + 1][1] = (dp[i][1] * even) % MOD;
			dp[i + 1][1] = (dp[i + 1][1] + ((dp[i][1] * odd) % MOD)) % MOD;
			dp[i + 1][1] = (dp[i + 1][1] + dp[i][1]) % MOD;
			
			if (n % 2 == 0) {
				dp[i + 1][1] = (dp[i + 1][1] + dp[i][0]) % MOD;
			} else {
				dp[i + 1][0] = (dp[i + 1][0] + dp[i][0]) % MOD;
			}
		}

		ll res = (dp[k][0] + dp[k][1]) % MOD;
		cout << res << endl;
	}
	
	return 0;
}
