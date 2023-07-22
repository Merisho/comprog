// Problem URL: https://codeforces.com/problemset/problem/474/B
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> p(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;

		p[i] = p[i - 1] + a;
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; ++i) {
		int q;
		cin >> q;

		int l = 0;
		int r = n - 1;
		int md;
		while (l <= r) {
			md = (l + r) / 2;

			if (q > p[md] && q <= p[md + 1]) {
				break;
			} else if (q <= p[md]) {
				r = md - 1;
			} else if (q > p[md + 1]) {
				l = md + 1;
			}
		}

		cout << (md + 1) << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_474b_worms_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
