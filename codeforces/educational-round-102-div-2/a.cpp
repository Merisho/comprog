#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, d;
		cin >> n >> d;

		vector<int> a(n);
		bool ok = true;
		for (int& ai : a) {
			cin >> ai;
			if (ai > d) {
				ok = false;
			}
		}

		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (a[i] + a[j] <= d) {
					ok = true;
					break;
				}
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
