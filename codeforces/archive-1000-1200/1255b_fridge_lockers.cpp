#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		int s = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			s += 2 * a;
		}

		if (m < n || n == 2) {
			cout << -1 << endl;
			continue;
		}

		cout << s << endl;

		for (int i = 1; i < n; ++i) {
			cout << i << " " << i + 1 << endl;
		}
		cout << n << " " << 1 << endl;
	}
	
	return 0;
}
	