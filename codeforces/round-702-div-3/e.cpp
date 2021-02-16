#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<pair<ll, int>> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].first;
			a[i].second = i;
		}

		sort(a.begin(), a.end());

		ll p = a[0].first;
		set<int> s;
		s.insert(a[0].second);
		for (int i = 1; i < n; ++i) {
			if (a[i].first > p) {
				s.clear();
			} else {
				s.insert(a[i - 1].second);
			}
			
			p += a[i].first;
		}

		s.insert(a[n - 1].second);

		cout << s.size() << endl;
		for (int i : s) {
			cout << (i + 1) << " ";
		}

		cout << endl;
	}
	
	return 0;
}
