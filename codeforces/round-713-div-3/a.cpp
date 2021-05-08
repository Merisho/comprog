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

		int b;
		if (a[0] == a[1] || a[0] == a[2]) {
			b = a[0];
		} else if (a[1] == a[2]) {
			b = a[1];
		}

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] != b) {
				ans = i + 1;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
