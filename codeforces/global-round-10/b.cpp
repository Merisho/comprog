#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, k;
		cin >> n >> k;

		vector<int> a(n);
		int mx = -1e9 - 1;
		for (int& ai : a) {
			cin >> ai;
			mx = max(mx, ai);
		}

		int mx2 = -1e9 - 1;
		for (int& ai : a) {
			ai = mx - ai;
			mx2 = max(mx2, ai);
		}
		mx = mx2;
		--k;

		if (k % 2 == 1) {
			for (int& ai : a) {
				ai = mx - ai;
			}
		}

		for (int ai : a) {
			cout << ai << " ";
		}

		cout << endl;
	}
	
	return 0;
}
