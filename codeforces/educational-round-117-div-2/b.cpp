#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, a, b;
		cin >> n >> a >> b;

		int ka = n - a + 1;
		if (b > a) {
			--ka;
		}

		int kb = b;
		if (a < b) {
			--kb;
		}

		if (ka < n / 2 || kb < n / 2) {
			cout << -1 << endl;
			continue;
		}

		int mx = n;
		for (int i = 0; i < n / 2; ++i) {
			if (mx == b) {
				continue;
			}
			
			cout << mx << " ";
			--mx;
		}

		int mn = 1;
		for (int i = 0; i < n / 2; ++i) {
			if (mn == a) {
				continue;
			}
			
			cout << mn << " ";
			++mn;
		}

		cout << endl;
	}
	
	return 0;
}
