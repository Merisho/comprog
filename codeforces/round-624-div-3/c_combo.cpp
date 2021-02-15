#include <bits/stdc++.h>
using namespace std;

int find(int i, vector<int>& p) {
	int l = 0;
	int r = p.size();
	while (l < r) {
		int m = l + (r - l) / 2;
		if (p[m] >= i) {
			r = m;
		} else {
			l = m + 1;
		}
	}

	return p.size() - r;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		string s;
		cin >> s;

		vector<int> p(m);
		for (int& pi : p) {
			cin >> pi;
		}

		sort(p.begin(), p.end());

		int c[26];
		for (int i = 0; i < 26; ++i) {
			c[i] = 0;
		}

		for (int i = 0; i < n; ++i) {
			int k = find(i + 1, p);
			c[s[i] - 'a'] += k + 1;
		}

		for (int i = 0; i < 26; ++i) {
			cout << c[i] << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	