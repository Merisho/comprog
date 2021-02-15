#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		int m;
		cin >> s >> m;

		vector<int> b(m);
		for (int& bi : b) {
			cin >> bi;
		}

		vector<int> count(26, 0);
		for (int i = 0; i < s.length(); ++i) {
			++count[s[i] - 'a'];
		}

		sort(s.begin(), s.end());

		string t(m, ' ');
		while (true) {
			vector<int> c;
			for (int i = 0; i < m; ++i) {
				if (b[i] == 0 && t[i] == ' ') {
					c.push_back(i);
				}
			}

			if (c.size() == 0) {
				break;
			}

			char l = s[s.length() - 1];
			while (t.find(l) != string::npos || count[l - 'a'] < c.size()) {
				s.pop_back();
				l = s[s.length() - 1];
			}

			for (int i = 0; i < c.size(); ++i) {
				int ci = c[i];
				t[ci] = s[s.length() - 1];

				for (int j = 0; j < m; ++j) {
					if (b[j] == 0) {
						continue;
					}
					b[j] -= abs(ci - j);
				}
			}
		}

		cout << t << endl;
	}
	
	return 0;
}
