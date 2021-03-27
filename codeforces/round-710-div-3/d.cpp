#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		map<int, int> m;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			m[a]++;
		}

		priority_queue<int> q;
		for (auto p : m) {
			q.push(p.second);
		}

		while (q.size() > 1) {
			int c1 = q.top();
			q.pop();

			int c2 = q.top();
			q.pop();

			--c1;
			--c2;

			if (c1 > 0) {
				q.push(c1);
			}

			if (c2 > 0) {
				q.push(c2);
			}
		}

		int ans = 0;
		if (q.size() == 1) {
			ans = q.top();
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
