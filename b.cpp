#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		int a = 0;
		while (n % 2 == 0) {
			++a;
			n /= 2;
		}

		int b = 0;
		while (n % 3 == 0) {
			++b;
			n /= 3;
		}
		
		if (b == 0 || n != 1 || a > b) {
			cout << -1;
		} else if (a == b) {
			cout << b;
		} else {
			int mx = max(a, b);
			int mn = min(a, b);
			int ans = mx + (mx - mn);
			cout << ans;
		}

		cout << endl;
	}
	
	return 0;
}
	