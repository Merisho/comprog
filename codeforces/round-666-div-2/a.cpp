#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> count(26, 0);
		for (int i = 0; i < n; ++i) {
			string s;
			cin >> s;

			for (char c : s) {
				++count[c - 'a'];
			}
		}

		bool ok = true;
		for (int c : count) {
			if (c % n != 0) {
				ok = false;
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
