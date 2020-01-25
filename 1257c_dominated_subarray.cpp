#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> last(n + 1, -1);
		int m = INF;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (last[a] == -1) {
				last[a] = i;
			} else {
				int d = i - last[a];
				last[a] = i;
				m = min(m, d);
			}
		}

		cout << (m == INF ? -1 : m + 1) << endl;
	}
	
	return 0;
}
	