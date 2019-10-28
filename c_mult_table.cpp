#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int d(int, int);

int D[1000000];

int main() {
	D[1] = 0;

	long long n;
	cin >> n;

	int k = sqrt(n);
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

int d(int x, int y) {
	if (x == 1 && y == 1) {
		return D[1];
	}

	int m = max(x, y);
	if (D[m] != 0) {
		return D[m];
	}

	if (x == 1) {
		return D[m] = 1 + d(x, y - 1);
	}

	if (y == 1) {
		return D[m] = 1 + d(x - 1, y);
	}

	return D[m] = 1 + min(d(x - 1, y), d(x, y - 1));
}
