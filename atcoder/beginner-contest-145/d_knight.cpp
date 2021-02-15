#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1e9 + 7;

long long binExp(long long a, long long e) {
	if (e == 0) {
		return 1;
	}

	if (e % 2 == 1) {
		return (binExp(a, e - 1) * a) % MOD;
	}

	long long b = binExp(a, e / 2);
	return (b * b) % MOD;
}

long long f(long long a) {
	long long r = 1;
	for (long long i = 2; i <= a; ++i) {
		r = (r * i) % MOD;
	}

	return r;
}

long long inv(long long a) {
	return binExp(a, MOD - 2);
}

long long c(long long k, long long n) {
	long long a = f(k);
	long long b = inv(f(n));
	long long d = inv(f(k - n));

	return ((a * b) % MOD * d) % MOD;
}

int main() {
	long long x, y;
	cin >> x >> y;

	if ((x + y) % 3 != 0) {
		cout << 0;
		return 0;
	}

	long long k = (x + y) / 3;
	long long n = x - k;

	if (n < 0 || k - n < 0) {
		cout << 0;
		return 0;
	}

	cout << c(k, n);

	return 0;
}
