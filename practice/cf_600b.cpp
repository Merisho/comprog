// Problem URL: https://codeforces.com/problemset/problem/600/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

int find(vector<int>& v, int x) {
	int l = 0;
	int r = v.size();

	while (l < r) {
		int m = (l + r) / 2;

		if (v[m - 1] <= x && v[m] > x) {
			return m;
		}

		if (v[m] <= x) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}

	return l;
}

void solve() {
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < m; ++i) {
		int b;
		cin >> b;

		cout << find(a, b) << " ";
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_600b_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
