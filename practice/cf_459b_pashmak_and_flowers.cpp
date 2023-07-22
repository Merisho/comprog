// Problem URL: https://codeforces.com/problemset/problem/459/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	ll n;
	cin >> n;

	vector<int> b(n);
	for (int &bi : b) {
		cin >> bi;
	}

	sort(b.begin(), b.end());

	if (b[0] == b[n - 1]) {
		cout << 0 << " " << (n * (n - 1LL) / 2LL) << endl;
		return;
	}

	int d = b[n - 1] - b[0];
	ll l = 0;
	ll r = n - 1;
	while (l < n && b[l] == b[0]) ++l;
	while (r >= l && b[r] == b[n - 1]) --r;

	ll k = l * (n - 1LL - r);
	cout << d << " " << k << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_459b_pashmak_and_flowers_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
