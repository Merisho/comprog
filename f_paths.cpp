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

	long long s = f(r1 + c1 + 1);
	for (int i = r1 + c1 + 1; i < r2 + c2; ++i) {
		s = (s + f(i + 1) * 2) % MOD;
	}
	s = (s + f(r2 + c2 + 1)) % MOD;

	cout << s;
	
	return 0;
}
	