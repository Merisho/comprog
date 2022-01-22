#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.rbegin(), a.rend());

		bool ans = true;
		vector<bool> used(n + 1, false);
		for (int ai : a) {
			while (ai > n || used[ai]) {
				ai /= 2;
			}

			if (ai == 0) {
				ans = false;
				break;
			}

			used[ai] = true;
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
