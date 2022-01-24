#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string x;
		cin >> x;

		bool r = true;
		int ri = x.length();
		for (int i = 0; i < x.length() - 1; ++i) {
			int d1 = x[i] - '0';
			int d2 = x[i + 1] - '0';

			if (d1 + d2 > 9) {
				ri = i;
				r = false;
			} else {
				r = r && true;
			}
		}

		if (r) {
			cout << ((x[0] - '0') + (x[1] - '0'));
			for (int i = 2; i < x.length(); ++i) {
				cout << x[i];
			}
		} else {
			int n = x.length();
			for (int i = 0; i < ri; ++i) {
				cout << x[i];
			}
			cout << ((x[ri] - '0') + (x[ri + 1] - '0'));
			for (int i = ri + 2; i < n; ++i) {
				cout << x[i];
			}
		}

		cout << endl;
	}
	
	return 0;
}
