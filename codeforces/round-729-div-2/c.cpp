#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9 + 7;

ll gcd(ll a, ll b){
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		ll g = 1;
		ll ans = 0;
		for (ll i = 2; g <= n; ++i) {
			ans += (n / g) % MOD;
			g = lcm(g, i);
		}

		cout << ((ans + n) % MOD) << endl;
	}
	
	return 0;
}
