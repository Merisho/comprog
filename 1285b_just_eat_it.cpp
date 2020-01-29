// UNSOLVED

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<long long> p(n + 1);
		p[0] = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			p[i + 1] = p[i] + a;
		}

		bool happy = true;
		for (int i = 0; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				if (i == 0 && j == n) {
					continue;
				}
				
				if (p[j] - p[i] >= p[n]) {
					happy = false;
					break;
				}
			}

			if (!happy) {
				break;
			}
		}

		if (happy) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	