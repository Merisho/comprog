// UNSOLVED

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		long long y = 0;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			y += a[i];
		}

		long long m = 0;
		for (int k = 1; k < n; ++k) {
			long long s = 0;
			for (int j = 0; j < k; ++j) {
				s += a[j];
			}

			m = max(m, s);
			for (int j = k; j < n; ++j) {
				s = s - a[j - k] + a[j];
				m = max(m, s);
			}
		}

		if (m < y) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	