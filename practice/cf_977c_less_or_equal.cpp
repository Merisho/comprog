// Problem URL: https://codeforces.com/problemset/problem/977/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	if (k == 0) {
		if (a[0] == 1) {
			cout << -1 << endl;
		} else {
			cout << 1 << endl;
		}

		return;
	}

	if (k == n) {
		cout << 1000000000 << endl;
		return;
	}

	if (a[k - 1] == a[k]) {
		cout << -1 << endl;
		return;
	}

	cout << a[k - 1] << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_977c_less_or_equal_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
