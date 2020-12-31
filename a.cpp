#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		int oi = s.find('(');
		int ci = s.find(')');

		int mn = min(oi, ci);
		int mx = max(oi, ci);

		int p = s.substr(0, mn).length() % 2;
		int m = s.substr(mn + 1, mx - mn - 1).length() % 2;
		int suf = s.substr(mx + 1, s.length() - mx - 1).length() % 2;

		if ((p + m + suf) % 2 == 0 && ci > 0 && oi < s.length() - 1) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
