// Problem URL: https://codeforces.com/problemset/problem/433/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;

	cin >> n;
	vector<ll> v(n);
	vector<ll> pv(n + 1, 0);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];

		pv[i + 1] = pv[i] + v[i];
	}

	sort(v.begin(), v.end());

	vector<ll> pu(n + 1, 0);
	for (int i = 0; i < n; ++i) {
		pu[i + 1] = pu[i] + v[i];
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; ++i) {
		int t, l, r;
		cin >> t >> l >> r;

		if (t == 1) {
			cout << (pv[r] - pv[l - 1]);
		} else {
			cout << (pu[r] - pu[l - 1]);
		}

		cout << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_433b_kuriyama_mirais_stones_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
