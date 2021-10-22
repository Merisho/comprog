#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	int mxnum = 200 * 100;
	vector<bool> cmp(mxnum + 11, false);
	for (int i = 3; i <= mxnum; ++i) {
		int s = sqrt(i);
		for (int k = 2; k <= s; ++k) {
			if (i % k == 0) {
				cmp[i] = true;
				break;
			}
		}
	}

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		int s = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			s += a[i];
		}

		if (cmp[s]) {
			cout << n << endl;
			for (int i = 1; i <= n; ++i) {
				cout << i << " ";
			}
			cout << endl;
			continue;
		}

		int ex = -1;
		for (int i = 0; i < n; ++i) {
			if (cmp[s - a[i]]) {
				ex = i + 1;
				break;
			}
		}

		cout << (n - 1) << endl;
		for (int i = 1; i <= n; ++i) {
			if (i == ex) {
				continue;
			}

			cout << i << " ";
		}

		cout << endl;
	}
	
	return 0;
}
