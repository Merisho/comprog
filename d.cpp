#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int mx = 0;
		int s = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			mx = max(mx, a);
			s += a;
		}

		if (mx > s / 2 || s % 2 == 1) {
			cout << "T";
		} else {
			cout << "HL";
		}

		cout << endl;
	}
	
	return 0;
}
