// Problem URL: https://codeforces.com/problemset/problem/450/B
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

const ll MOD = 1e9 + 7;

void solve() {
	ll x, y, n;
	cin >> x >> y >> n;
	
	ll cases[6] = {x - y, x, y, y - x, -x, -y};

	ll ans = (cases[n % 6] + 2LL * MOD) % MOD;
	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_450b_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
