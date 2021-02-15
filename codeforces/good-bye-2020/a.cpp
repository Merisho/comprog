#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<double> x(n);
		for (double& xi : x) {
			cin >> xi;
		}

		map<double, bool> m;
		int k = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				double xx = x[j] - x[i];

				double s = xx * 0.5;

				if (!m[s]) {
					++k;
					m[s] = true;
				}
			}
		}

		cout << k << endl;
	}
	
	return 0;
}
