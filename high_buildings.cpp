#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void print_case(int t) {
	cout << "Case #" << t << ": ";
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, a, b, c;
		cin >> n >> a >> b >> c;

		print_case(test_case);
		if (a + b - c > n || (a == 1 && b == 1 && n > 1)) {
			cout << "IMPOSSIBLE" << endl;
			continue;
		}

		for (int i = 0; i < a - c; ++i) {
			cout << (n - 1) << " ";
		}

		int d = n - (a + b - c);
		if (a - c > 0) {
			for (int i = 0; i < d; ++i) {
				cout << 1 << " ";
			}
			d = 0;
		}

		for (int i = 0; i < c; ++i) {
			cout << n << " ";
		}

		if (b - c > 0) {
			for (int i = 0; i < d; ++i) {
				cout << 1 << " ";
			}
		}

		for (int i = 0; i < b - c; ++i) {
			cout << (n - 1) << " ";
		}

		cout << endl;
	}
	
	return 0;
}
