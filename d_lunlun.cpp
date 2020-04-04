// UNSOLVED

#include <bits/stdc++.h>
using namespace std;

int k;

long long gen(int i, long long n, int l) {
	if (l == k) {
		return n / 10;
	}

	long long a = 1e12, b = 1e12, c = 1e12;

	if (i > 0) {
		a = gen(i - 1, (n + i - 1) * 10, l + 1);
	}

	b = gen(i, (n + i) * 10, l + 1);

	if (i < 9) {
		c = gen(i + 1, (n + i + 1) * 10, l + 1);
	}

	return min(min(a, b), c);
}

int main() {
	cin >> k;

	if (k < 13) {
		cout << k;
		return 0;
	}

	long long m = 1e12;
	for (int i = 2; i < 10; ++i) {
		long long n = gen(i, i * 10, 10 + 3 * (i - 1));
		m = min(m, n);
	}

	cout << m;
	
	return 0;
}
	