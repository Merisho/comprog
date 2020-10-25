#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int s1 = 0;
		int s2 = 0;
		int a;
		for (int i = 0; i < n - 1; ++i) {
			cin >> a;

			if (i < n / 2) {
				s1 += a;
			} else {
				s2 += a;
			}
		}

		cin >> a;

		if (s1 + a == 0 && s2 + a == 0) {
			for (int i = 0; i < n; ++i) {
				cout << 1 << " ";
			}

			cout << endl;
			continue;
		}

		int t = false;
		if (s1 + a == 0 || s2 == 0) {
			s2 += a;
			t = true;
		} else {
			s1 += a;
		}

		int g = gcd(s1, s2);
		int k = (s1 * s2) / g;
 
		int ans1 = k / s1;
		int ans2 = -(k / s2);
 
		for (int i = 0; i < n - 1; ++i) {
			cout << (i < n / 2 ? ans1 : ans2) << " ";
		}

		if (t) {
			cout << ans2;
		} else {
			cout << ans1;
		}

		cout << endl;
	}
	
	return 0;
}