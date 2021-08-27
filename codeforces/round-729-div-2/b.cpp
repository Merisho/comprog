#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, a, b;
		cin >> n >> a >> b;

		bool ok = false;
		ll aa = 1;
		while (aa <= n) {
			if ((n - aa) % b == 0) {
				ok = true;
				break;
			}

			if (a == 1) {
				break;
			}

			aa *= a;
		}

		cout << (ok ? "Yes" : "No") << endl;
	}
	
	return 0;
}
