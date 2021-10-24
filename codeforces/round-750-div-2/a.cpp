#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll a, b, c;
		cin >> a >> b >> c;

		if ((a + 2 * b + 3 * c) % 2 == 0) {
			cout << 0;
		} else {
			cout << 1;
		}

		cout << endl;
	}
	
	return 0;
}
