// Problem URL: https://codeforces.com/problemset/problem/445/A
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		char p;
		if (i % 2 == 0) {
			p = 'W';
		} else {
			p = 'B';
		}

		for (int j = 0; j < m; ++j) {
			char c;
			cin >> c;

			char curr;
			if (p == 'W') {
				curr = 'B';
			} else {
				curr = 'W';
			}

			if (c == '-') {
				cout << c;
			} else {
				cout << curr;
			}

			p = curr;
		}

		cout << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_445a_dzy_loves_chessboard_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
