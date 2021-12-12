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
		for (int& ai : a) {
			cin >> ai;
		}

		vector<int> b(n);
		for (int& bi : b) {
			cin >> bi;
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
	
		bool ans = true;
		for (int i = 0; i < n; ++i) {
			if (b[i] - a[i] != 0 && b[i] - a[i] != 1) {
				ans = false;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
