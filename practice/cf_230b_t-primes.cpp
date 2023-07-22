// Problem URL: https://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

vector<bool> prime(1e6 + 1, true);

void fill_primes() {
	prime[1] = false;
	
	for (ll p = 2; p <= 1e6; ++p) {
		if (!prime[p]) {
			continue;
		}

		for (int k = 2; p * k <= 1e6; ++k) {
			prime[p * k] = false;
		}
	}
}

bool t_prime(ll x) {
	ll s = sqrt(x);
	return s * s == x && prime[s];
}

void solve() {
	fill_primes();

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		ll x;
		cin >> x;

		cout << (t_prime(x) ? "YES" : "NO") << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_230b_t-primes_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
