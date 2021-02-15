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

		queue<int> q;
		int b = 0;
		for (int i = 1; i < s.length(); ++i) {
			if (s[i] == s[i - 1]) {
				q.push(b);
			} else {
				++b;
			}
		}

		int d = 0;
		int o = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (q.empty()) {
				break;
			}

			q.pop();
			d += 2;
			++o;
			while (!q.empty() && q.front() == i) {
				++d;
				q.pop();
			}
		}

		int ans = o + (s.length() - d + 1) / 2;
		cout << ans << endl;
	}
	
	return 0;
}