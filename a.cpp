#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b;
		cin >> a >> b;

		int d = abs(b - a);
		int k = 10;
		int c = 0;
		while (d > 0) {
			if (d >= k) {
				c += d / k;
				d %= k;
			} else {
				--k;
			}
		}

		cout << c << endl;
	}
	
	return 0;
}
