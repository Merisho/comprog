#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int x;
		cin >> x;

		int ans = 0;
		int k = 9;

		while (x > 0 && k > 0) {
			int a = min(x, k);

			ans = a * pow(10, 9 - k) + ans;

			x -= a;
			--k;
		}

		if (x != 0) {
			cout << -1;
		} else {
			cout << ans;
		}

		cout << endl;
	}
	
	return 0;
}
