#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool f(int n, int a, int b, int c, int d) {
	if (b < n - 1) {
		if (a == n - 1) {
			return c >= 1 || d >= 1;
		} else if (a == n) {
			return c >= 1 && d >= 1;
		}
	}

	if (b == n - 1) {
		if (a == n - 1) {
			return c >= 1 && d >= 1 || c >= 2 || d >= 2;
		} else if (a == n) {
			return c >= 2 && d >= 1 || c >= 1 && d >= 2;
		}
	}

	if (b == n) {
		if (a == n - 1) {
			return c >= 2 && d >= 1 || c >= 1 && d >= 2;
		} else if (a == n) {
			return c >= 2 && d >= 2;
		}
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, u, r, d, l;
		cin >> n >> u >> r >> d >> l;

		if (u == n - 1)

		

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
