#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<pair<int, int>> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].first;
		}

		for (int i = 0; i < n; ++i) {
			cin >> a[i].second;
		}

		sort(a.begin(), a.end());

		vector<pair<int, int>> t;
		int s = 0;
		int st = 1;
		int sb = 0;
		for (int i = n - 1; i > 0; --i) {
			if (s >= m) {
				if (s - t[st - 1].first + a[i].first >= m && t[st - 1].second > a[i].second) {
					--sb;
					s = s - t[st - 1].first + a[i].first;
					t.pop_back();
					t.push_back(a[i]);
				}
			} else {
				s += a[i].first;
				t.push_back(a[i]);
				sb += a[i].second;
			}
		}

		cout << (sb == 0 ? -1 : sb) << endl;
	}
	
	return 0;
}
