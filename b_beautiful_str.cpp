#include <bits/stdc++.h>
using namespace std;

long long find(int k, int n) {
	long long l = 1;
	long long r = n - 1;
	long long ans = n - 1;
	while (l <= r) {
		long long m = l + (r - l) / 2;
		if (m * (m + 1) / 2 >= k) {
			ans = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}

	return ans;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		long long m = find(k, n);
		int b1 = n - m;
		
		long long m2 = m * (m - 1) / 2 + 1;
		int b2 = n - k + m2;

		for (int i = 1; i <= n; ++i) {
			if (i == b1 || i == b2) {
				cout << 'b';
			} else {
				cout << 'a';
			}
		}

		cout << endl;
	}
	
	return 0;
}
	