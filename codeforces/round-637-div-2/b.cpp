#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		queue<int> q;
		for (int i = 1; i < k - 1; ++i) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
				q.push(i);
			}
		}

		int mx = q.size();
		int l = 0;
		for (int i = 1; i <= n - k; ++i) {
			if (q.size() > 0 && i == q.front()) {
				q.pop();
			}

			int rp = i + k - 2;
			if (a[rp] > a[rp - 1] && a[rp] > a[rp + 1]) {
				q.push(rp);
			}

			if (q.size() > mx) {
				mx = q.size();
				l = i;
			}
		}

		cout << (mx + 1) << " " << (l + 1) << endl;
	}
	
	return 0;
}
	