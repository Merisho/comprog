#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		while (n % 2LL == 0) {
			n /= 2LL;
		}

		cout << (n > 1 ? "YES" : "NO") << endl;
	}
	
	return 0;
}
