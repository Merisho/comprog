#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr long long MOD = 1e9 + 7;

ll binExp(ll a, ll e) {
	if (e == 0) {
		return 1;
	}

	if (e % 2 == 1) {
		return (binExp(a, e - 1) * a) % MOD;
	}

	ll b = binExp(a, e / 2);
	return (b * b) % MOD;
}

int main() {
	ll k;
	cin >> k;

	string s;
	cin >> s;

	ll n = s.length();
	ll ans = 0;

	ll fact[n + k + 1];
	ll inv[n + k + 1];

	fact[0] = inv[0] = 1;
	for (int i = 1; i <= n + k; ++i) {
		fact[i] = (fact[i - 1] * i) % MOD;
		inv[i] = binExp(fact[i], MOD - 2);
	}

	for (int i = n; i <= n + k; ++i) {
		ll a = (((fact[n + k] * inv[n + k - i]) % MOD) * inv[i]) % MOD;
		a = (a * binExp(25, n + k - i)) % MOD;
		ans = (ans + a) % MOD;
	}

	cout << ans;
	
	return 0;
}
