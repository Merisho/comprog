#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> m(3, 0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			++m[a % 3];
		}

		int x = min(m[1], m[2]);
		int y = max(m[1], m[2]);
		cout << (m[0] + x + (y - x) / 3) << endl;
	}
	
	return 0;
}
	