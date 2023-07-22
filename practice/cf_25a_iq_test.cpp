// Problem URL: https://codeforces.com/problemset/problem/25/A
#include <iostream>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;

	int e = -1;
	int o = -1;
	int cnt_e = 0;
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;

		if (a % 2 == 0) {
			++cnt_e;
			e = i;
		} else {
			o = i;
		}
	}

	if (cnt_e == 1) {
		cout << e;
	} else {
		cout << o;
	}

	cout << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_25a_iq_test_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
