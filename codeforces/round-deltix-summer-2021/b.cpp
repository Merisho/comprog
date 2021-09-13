#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		int o = 0;
		int e = 0;
		priority_queue<int, vector<int>, std::greater<int>> oq;
		priority_queue<int, vector<int>, std::greater<int>> eq;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				++e;
				eq.push(i);
			} else {
				++o;
				oq.push(i);
			}
		}

		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		int h = (n + 1) / 2;
		if (e > h || o > h) {
			cout << -1 << endl;
			continue;
		}

		int ans = 0;
		int p = eq.top();
		eq.pop();
		while (!eq.empty() && !oq.empty()) {
			int e = eq.top();
			eq.pop();

			if (e > oq.top()) {
				oq.pop();
			}

			if (e - p == 1 || e - p > 2) {
				int o = oq.top();

				ans += abs(o - e);
				eq.push(o);

				oq.pop();

				if (o > p) {
					p = o;
				}
			} else if (e - p == 2) {
				p = e;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
