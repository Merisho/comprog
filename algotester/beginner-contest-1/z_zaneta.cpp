#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> s(n);
	for (int i = 0; i < n; ++i) {
		s[i].first = 0;
		s[i].second = i + 1;
	}
	
	for (int i = 0; i < k; ++i) {
		int p, r, a;
		cin >> p >> r >> a;

		s[p - 1].first -= a;
		s[r - 1].first += a;
	}

	sort(s.begin(), s.end());

	int r = n - 1;
	int l = 0;
	int m = 0;
	vector<int> tp;
	vector<int> tr;
	vector<int> ta;
	while (l < r) {
		while(s[r].first > 0 && s[l].first < 0) {
			int a = abs(s[l].first);
			ta.push_back(min(a, s[r].first));
			tp.push_back(s[r].second);
			tr.push_back(s[l].second);

			s[r].first -= ta[m];
			s[l].first += ta[m];

			++m;
		}

		if (s[r].first == 0) {
			--r;
		}

		if (s[l].first == 0) {
			++l;
		}
	}

	cout << m << endl;
	for (int i = 0; i < m; ++i) {
		cout << tp[i] << " " << tr[i] << " " << ta[i] << endl;
	}
	
	return 0;
}
	