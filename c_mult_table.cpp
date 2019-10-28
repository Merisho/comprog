#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long d(long long, long long);

int main() {
	long long n;
	cin >> n;

	long long k = sqrt(n);
	while (n % k != 0) {
		k--;
	}

	if (k == 1) {
		cout << n - 1;
	}
	else {
		cout << d(k, n / k);
	}

	return 0;
}

long long d(long long x, long long y) {
	if (x == 1 && y == 1) {
		return 0;
	}

	if (x == 1) {
		return 1 + d(x, y - 1);
	}

	if (y == 1) {
		return 1 + d(x - 1, y);
	}

	return 1 + min(d(x - 1, y), d(x, y - 1));
}
