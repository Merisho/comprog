// Problem URL: https://codeforces.com/problemset/problem/706/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> x(n);
	for (int &xi : x) {
		cin >> xi;
	}

	sort(x.begin(), x.end());

	int q;
	cin >> q;

	for (int i = 0; i < q; ++i) {
		int mi;
		cin >> mi;

		int l = 0;
		int r = n;
		while (l < r) {
			int m = (l + r) / 2;
			if (x[m] <= mi) {
				l = m + 1;
			} else {
				r = m;
			}
		}

		cout << l << endl;
	}
 }

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_706b_interesting_drink_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
