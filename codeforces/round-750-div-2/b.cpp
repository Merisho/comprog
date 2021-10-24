#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		ll z = 0;
		ll o = 0;
		for (int i = 0; i < n; ++i) {
			ll ai;
			cin >> ai;
			
			if (ai == 0) {
				++z;
			} else if (ai == 1) {
				++o;
			}
		}

		ll ans = o * (1LL<<z);
		cout << ans << endl;
	}
	
	return 0;
}
