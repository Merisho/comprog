#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		vector<int> a;
		int k = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '1') {
				++k;
			} else {
				if (k > 0) {
					a.push_back(k);
				}
				k = 0;
			}
		}

		if (k > 0) {
			a.push_back(k);
		}

		sort(a.begin(), a.end());

		int ans = 0;
		for (int i = a.size() - 1; i >= 0; i -= 2) {
			ans += a[i];
		}

		cout << ans << endl;
	}
	
	return 0;
}
