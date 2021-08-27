#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		map<int, int> m;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			m[a[i]] = i;
		}

		sort(a.begin(), a.end());

		int mn = 1;
		for (int i = 1; i < n; ++i) {
			if (m[a[i]] - m[a[i - 1]] != 1) {
				++mn;
			}
		}

		if (mn <= k) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
