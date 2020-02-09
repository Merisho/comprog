// UNSOLVED

#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

int f(int n) {
	if (n <= 2) {
		return 1;
	}

	int p = 1;
	int c = 1;
	for (int i = 3; i <= n; ++i) {
		int t = c;
		c = (c + p) % MOD;
		p = t;
	}

	return c;
}

int main() {
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	long long s = 0;
	for (int i = r1; i <= r2; ++i) {
		for (int j = c1; j <= c2; ++j) {
			s = (s + f(i + j + 1)) % MOD;
		}
	}

	cout << s;
	
	return 0;
}
	