#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		int ps = 0;
		int ns = 0;
		for (int& ai : a) {
			cin >> ai;
			if (ai < 0) {
				ns += ai;
			} else {
				ps += ai;
			}
		}

		if (ps + ns == 0) {
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;
		if (ps + ns < 0) {
			for (int i = 0; i < n; ++i) {
				if (a[i] < 0) {
					cout << a[i] << " ";
				}
			}

			for (int i = 0; i < n; ++i) {
				if (a[i] >= 0) {
					cout << a[i] << " ";
				}
			}
		} else {
			int k = 0;
			for (int i = 0; i < n; ++i) {
				if (a[i] == 0) {
					++k;
					continue;
				}

				if (a[i] > 0) {
					cout << a[i] << " ";
				}
			}

			for (int i = 0; i < n; ++i) {
				if (a[i] < 0) {
					cout << a[i] << " ";
				}
			}

			for (int i = 0; i < k; ++i) {
				cout << 0 << " ";
			}
		}

		cout << endl;
	}
	
	return 0;
}
