// Problem URL: https://codeforces.com/problemset/problem/545/D
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> t(n);
	for (int &ti: t) {
		cin >> ti;
	}

	sort(t.begin(), t.end());

	vector<int> p(n, 0);
	for (int i = 1; i < n; ++i) {
		p[i] = p[i - 1] + t[i - 1];
	}

	int l = 0;
	int r = p.size() - 1;
	int ans = 1;
	while (l < r) {
		int m = (l + r) / 2;

		int k = 0;
		for (int i = m; i < n; ++i) {
			if (p[i] - p[m] <= t[i]) {
				++k;
			}
		}

		if (k > ans) {
			ans = k;
			r = m;
		} else {
			l = m + 1;
		}
	}

	cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_545d_queue_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
