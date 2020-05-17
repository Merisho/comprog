#include <bits/stdc++.h>
using namespace std;

bool sq(int a) {
	if (a < 0) {
		return false;
	}

	int s = sqrt(a);
	return s * s == a;
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		cin >> n;

		vector<int> p(n + 1, 0);
		for (int i = 1; i <= n; ++i) {
			int a;
			cin >> a;

			p[i] = p[i - 1] + a;
		}

		int k = 0;
		for (int i = 0; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				if (sq(p[j] - p[i])) {
					++k;
				}
			}
		}

		cout << "Case #" << t << ": " << k << endl;
	}
	
	return 0;
}
	