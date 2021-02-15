#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<double> a(n);
	for (double& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	double m = 0;
	for (int i = 0; i < n - 1; ++i) {
		m = max(m, a[i + 1] - a[i]);
	}

	double d1 = 360 - a[n -1] + a[0];
	cout << max(m, d1) / 2; 
	
	return 0;
}
