// Problem URL: https://codeforces.com/problemset/problem/514/A
#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	ll x;
	cin >> x;

	ll ans = 0;
	ll i = 0;
	while (x > 0 && x != 9) {
		ll d = x % 10;
		ans += min(d, 9LL - d) * pow(10LL, i);
		++i;
		x /= 10;
	}

	if (x == 9) {
		ans += 9 * pow(10LL, i);
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_514a_chewbaсca_and_number_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
