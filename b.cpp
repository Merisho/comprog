#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		long long m = n / 2;
		if (m % 2 == 1) {
			cout << "NO" << endl;
			continue;
		}

		vector<int> a(n);
		for (int i = 1; i <= m; ++i) {
			a[i - 1] = i * 2;
		}

		for (int i = 1; i <= m; ++i) {
			a[i - 1 + m] = i * 2 - 1;
		}

		a[n - 1] += m;

		cout << "YES" << endl;
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	