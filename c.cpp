#include <bits/stdc++.h>
using namespace std;

const string F = "Ashishgup";
const string S = "FastestFinger";

bool prime(int n) {
	for (int k = 2; k * k <= n; ++k) {
		if (n % k == 0) {
			return false;
		}
	}

	return true;
}

string solve(int n) {
	if (n == 1) {
		return S;
	}

	if (n == 2 || n % 2 == 1) {
		return F;
	}

	int x = 0;
	while (n % 2 == 0) {
		++x;
		n /= 2;
	}

	if (x > 1) {
		if (n == 1) {
			return S;
		}

		return F;
	}

	if (prime(n)) {
		return S;
	}

	return F;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		cout << solve(n) << endl;
	}
	
	return 0;
}
