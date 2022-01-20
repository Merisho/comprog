#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int ans = 0;
		map<int, int> cnt;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			++cnt[a];

			if (cnt[a] == 1) {
				++ans;
			} else if (cnt[a] == 2 && a != 0 && cnt[-a] == 0) {
				++ans;
				++cnt[-a];
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
