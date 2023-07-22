// Problem URL: https://codeforces.com/problemset/problem/478/B
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	ll n, m;
	cin >> n >> m;

	ll k = n - m + 1LL;
	ll mx = k * (k - 1LL) / 2LL;

	ll p = n / m;
	ll mn = p * (p - 1LL) / 2LL * (m - (n % m));
	mn += p * (p + 1LL) / 2LL * (n % m);

	cout << mn << " " << mx << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_478b_random_teams_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
