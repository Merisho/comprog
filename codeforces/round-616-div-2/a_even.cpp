#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		if (n == 1) {
			int m;
			cin >> m;
			cout << -1 << endl;
			continue;
		}

		string m;
		cin >> m;

		string res;
		int s = 0;
		bool ans = false;
		for (int i = 0; i < n; ++i) {
			int d = m[i] - '0';
			s += d;
			res += m[i];

			if (s % 2 == 0 && d % 2 == 1) {
				ans = true;
				break;
			}
		}

		if (ans) {
			cout << res;
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
	