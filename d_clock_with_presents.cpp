#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	int m = min(a, b);
	int mx = max(a, b);
	return m == 0 ? mx : gcd(mx % m, m);
}

int main() {
	int n, x, y;
	cin >> x >> y >> n;

	map<pair<int, int>, int> c;
	int m = 0;
	for (int i = 0; i < n; ++i) {
		int px, py;
		cin >> px >> py;

		px -= x;
		py -= y;
		int g = gcd(abs(px), abs(py));

		int a = px / g;
		int b = py / g;

		++c[{ a, b }];
		m = max(m, c[{a, b}]);
	}

	cout << m - 1;
	
	return 0;
}
	