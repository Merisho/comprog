#include <bits/stdc++.h>
using namespace std;

bool pred(long long A, long long s) {
	if (s < 0) {
		return A > s;
	}

	return A < s;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> aa(n);
		long long s = 0;
		for (int i = 0; i < n / 2; ++i) {
			if (i % 2 == 0) {
				if (i > 0 && i < n / 2 - 1) {
					s += 2 * (a[i] + a[n - i - 1]);
				} else {
					s += a[i] + a[n - i - 1];
				}
			} else {
				if (i > 0 && i < n / 2 - 1) {
					s -= 2 * (a[i] + a[n - i - 1]);
				} else {
					s -= a[i] + a[n - i - 1];
				}
			}

			aa.push_back(a[i]);
			aa.push_back(a[n - i - 1]);
		}

		long long A = 0;
		int i;
		for (i = 0; i < n && pred(A, s); ++i) {
			if (i % 4 < 2) {
				if (s < 0) {
					A -= k - aa[i];
				} else {
					A += aa[i] - 1;
				}
			} else {
				if (s < 0) {
					A += -aa[i] + 1;
				} else {
					A += k - aa[i];
				}
			}
		}

		cout << i << endl;
	}
	
	return 0;
}
	