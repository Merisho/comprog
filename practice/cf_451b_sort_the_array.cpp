// Problem URL: https://codeforces.com/problemset/problem/451/B
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n + 2);
	a[0] = 0;
	a[n + 1] = 1e9 + 1;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	int l = 0;
	int r = 0;
	bool ok = true;
	for (int i = 1; i <= n; ++i) {
		if (a[i] <= a[i + 1]) {
			continue;
		}

		if (l > 0) {
			ok = false;
			break;
		}

		l = i;
		for (int j = l; j <= n; ++j) {
			if (a[j] < a[j + 1]) {
				r = j;
				break;
			}
		}

		if (r == 0) {
			r = n;
		}

		if (a[r] < a[l - 1] || a[l] > a[r + 1]) {
			ok = false;
			break;
		}

		i = r;
	}

	if (ok) {
		cout << "yes" << endl;

		if (l > 0) {
			cout << l << " " << r << endl;
		} else {
			cout << 1 << " " << 1 << endl;
		}
	} else {
		cout << "no" << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_451b_sort_the_array_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
