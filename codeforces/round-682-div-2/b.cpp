#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		bool ans = false;
		set<int> s;
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;

			if (s.count(b) > 0) {
				ans = true;
			} else {
				s.insert(b);
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
