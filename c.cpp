#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(2 * n);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		int ss = -1;
		vector<pair<int, int>> ans;
		for (int i = 0; i < 2 * n - 1; ++i) {
			ans.clear();
			multiset<int> s(a.begin(), a.end());
			ss = a[2 * n - 1] + a[i];
			int x = ss;

			for (int j = 0; j < n; ++j) {
				int mx = *(s.rbegin());
				s.erase(s.find(mx));
				
				if (s.count(x - mx) > 0) {
					s.erase(s.find(x - mx));
					ans.push_back({ mx, x - mx });
					x = mx;
				} else {
					ss = -1;
					break;
				}
			}

			if (ss > -1) {
				break;
			}
		}

		if (ss > -1) {
			cout << "YES" << endl << ss << endl;
			for (int i = 0; i < ans.size(); ++i) {
				cout << ans[i].first << " " << ans[i].second << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
