#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		set<int> ds;
		map<int, int> m;
		int s = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			ds.insert(a);
			++m[a];

			s = max(s, m[a]);
		}

		int d = ds.size() - 1;

		if (n < 3) {
			cout << (n / 2) << endl;
			continue;
		}

		if (d >= s) {
			cout << s << endl;
			continue;
		}

		if (s - d >= 2) {
			cout << (d + 1);
		} else {
			cout << d;
		}

		cout << endl;
	}
	
	return 0;
}
	