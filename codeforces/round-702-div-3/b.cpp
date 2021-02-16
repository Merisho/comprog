#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int c[] = {0, 0, 0};
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			++c[a % 3];
		}

		int x = n / 3;

		int ans = 0;
		
		for (int i = 0; i < 3; ++i) {
			int d = x - c[i];
			int p = i == 0 ? 2 : i - 1;
			if (d > 0 && c[p] > x) {
				int e = min(d, c[p] - x);
				ans += e;
				c[p] -= e;
			}
		}

		for (int i = 0; i < 3; ++i) {
			int d = x - c[i];
			int p = (i + 1) % 3;
			if (d > 0 && c[p] > x) {
				int e = min(d, c[p] - x);
				ans += e * 2;
				c[p] -= e;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
