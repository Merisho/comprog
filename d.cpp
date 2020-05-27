#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		if (n <= k) {
			cout << 1 << endl;
			continue;
		}

		int ans = n;
		for (int i = 1; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				if (i <= k) {
					ans = min(ans, n / i);
				}

				if (n / i <= k) {
					ans = min(ans, i);
				}
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	