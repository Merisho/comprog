#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

long long f(long long n) {
	long long r = 1;
	for (long long i = 2; i <= n; ++i) {
		r = (r * i) % MOD;
	}

	return r;
}

long long binPow(long long n, long long b) {
	if (b == 0) {
		return 1;
	}

	if (b % 2 == 1) {
		return (binPow(n, b - 1) * n) % MOD;
	}

	long long a = binPow(n, b / 2);
	return (a * a) % MOD;
}

long long c(int r, int c) {
	long long x = f(r + c);
	long long y = binPow(f(r), MOD - 2);
	long long z = binPow(f(c), MOD - 2);
	x = (x * y) % MOD;
	x = (x * z) % MOD;

	return x;
}

int main() {
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	long long r = c(r2, c2);
	r = (r + c(r1, c2)) % MOD;
	r = (r + c(r2, c1)) % MOD;
	r = (r + c(r1, c1)) % MOD;
	cout << r;
	
	return 0;
}
	