#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		bool ok = false;
		for (int a = 0; a <= n; a += 2020) {
			int m = n - a;
			if (m % 2021 == 0) {
				ok = true;
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
