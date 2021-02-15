#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int l, r;
		cin >> l >> r;

		if (2 * l > r) {
			cout << -1 << " " << -1;
		} else {
			cout << l << " " << (2 * l);
		}

		cout << endl;
	}
	
	return 0;
}
