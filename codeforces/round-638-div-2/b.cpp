#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		vector<int> b;
		set<int> u;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (u.find(a[i]) == u.end()) {
				u.insert(a[i]);
				b.push_back(a[i]);
			}
		}

		if (u.size() > k) {
			cout << -1 << endl;
			continue;
		}

		for (int i = b.size(); i < k; ++i) {
			b.push_back(1);
		}

		cout << (n * k) << endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < k; ++j) {
				cout << b[j] << " ";
			}
		}

		cout << endl;
	}
	
	return 0;
}
	