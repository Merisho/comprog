#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<double> pr(n + 1);
	pr[0] = 0;
	for (int i = 1; i < n + 1; ++i) {
		double p;
		cin >> p;
		pr[i] = pr[i - 1] + (p + 1) / 2;
	}

	double m = 0;
	for (int i = 1; i <= n - k + 1; ++i) {
		m = max(m, pr[i + k - 1] - pr[i - 1]);
	}

	cout << fixed << setprecision(6) << m;
	
	return 0;
}
	