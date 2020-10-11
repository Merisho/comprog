#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		vector<int> c;
		int k = 1;
		char p = s[0];
		for (int i = 1; i < n; ++i) {
			if (s[i] == p) {
				++k;
				continue;
			}

			c.push_back(k);
			p = s[i];
			k = 1;
		}

		c.push_back(k);

		priority_queue<pair<int, int>> q;
		for (int i = 0; i < c.size(); ++i) {
			q.push({ c[i], i });
		}

		int ans = 0;
		for (int i = 0; i < c.size(); ++i) {
			if (c[i] == 0) {
				continue;
			}
			
			++ans;
			if (c[i] == 1 && q.size() > 0) {
				auto m = q.top();
				q.pop();

				if (c[m.second] > 0) {

					--m.first;
					--c[m.second];
					q.push(m);
				}
			}

			c[i] = 0;
		}

		cout << ans << endl;
	}
	
	return 0;
}