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

 // 213727131
 // 71242377

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

		if (k == 1 || prime(n)) {
			cout << n << endl;
			continue;
		}

		int ans;
		for (int i = 1; i <= n / 2; ++i) {
			if (n % i == 0 && n / i <= k) {
				ans = i;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	