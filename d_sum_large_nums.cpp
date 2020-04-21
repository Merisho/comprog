#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1e9 + 7;

int main() {
	long long n, k;
	cin >> n >> k;

	long long s = 1;
	while (k <= n) {
		s = (s + k * (n + 1 - k) + 1) % MOD;
		++k;
	}

	cout << s;

	return 0;
}
	