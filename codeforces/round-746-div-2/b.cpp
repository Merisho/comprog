#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, x;
		cin >> n >> x;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		if (n >= 2 * x) {
			cout << "YES" << endl;
			continue;
		}

		auto b = a;

		sort(b.begin(), b.end());

		bool ok = true;
		for (int i = n - x; i < x; ++i) {
			if (b[i] != a[i]) {
				ok = false;
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
