// Problem URL: https://codeforces.com/problemset/problem/492/B
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

bool covers(vector<ll> &a, ld m, ll l) {
	if (ld(a[0]) - m > 0 || ld(a[a.size() - 1]) + m < l) {
		return false;
	}
	
	for (int i = 1; i < a.size(); ++i) {
		ld l = a[i - 1];
		ld r = a[i];
		if (l + m < r - m) {
			return false;
		}
	}

	return true;
}

void solve() {
	ll n, l;
	cin >> n >> l;

	vector<ll> a(n);
	for (ll &ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	ld s = 0;
	ld d = l;
	while (d - s > 1e-9) {
		ld m = (s + d) / 2;
		if (covers(a, m, l)) {
			d = m;
		} else {
			s = m;
		}
	}

	cout << setprecision(20) << d << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_492b_vanya_and_lanterns_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
