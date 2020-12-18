#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		ll s = 0;
		for (int i = 1; i < n; ++i) {
			ll ai;
			cin >> ai;
			s += ai;
		}

		ll b = s / n;
		for (int i = 0; i < n; ++i) {
			cout << b << " ";
		}

		cout << endl;
	}
	
	return 0;
}
