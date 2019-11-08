#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int V[600][600];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;

		V[s - 1][t - 1] = 1;
	}

	vector<long double> deg(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; j++) {
			deg[i] += V[i][j];
		}
	}

	vector<long double> e(n);
	e[n - 1] = 0;
	for (int i = n - 2; i >= 0; --i) {
		for (int j = 0; j < n; ++j) {
			if (V[i][j] == 1) {
				e[i] += (1 + e[j]) / deg[i];
			}
		}
	}

	vector<long double> p(n);
	p[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (V[i][j] == 1) {
				p[j] += p[i] / deg[i];
			}
		}
	}

	long double ans = e[0];
	for (int i = 0; i < n - 1; ++i) {
		if (deg[i] == 1) {
			continue;
		}

		for (int j = i + 1; j < n; ++j) {
			if (V[i][j] == 0) {
				continue;
			}

			long double val = e[0];
			long double ne = (e[i] - 1) * deg[i];
			ne -= e[j];
			ne /= (deg[i] - 1);
			ne += 1;

			val += (ne - e[i]) * p[i];

			ans = min(ans, val);
		}
	}

	cout << setprecision(10) << ans;

	return 0;
}
