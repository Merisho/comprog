#include <bits/stdc++.h>
using namespace std;

int min_f(int n) {
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return i;
		}
	}

	return n;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int f = min_f(n);
		int k = n / f;
		cout << k << " " << (n - k) << endl;
	}
	
	return 0;
}
	