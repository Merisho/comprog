#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll a, b, c;
		cin >> a >> b >> c;

		if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
			cout << "YES";
		} else if ((c + a) % (2 * b) == 0 && (c + a) / (2 * b) > 0) {
			cout << "YES";
		} else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
