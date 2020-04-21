#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	long long s = 0;
	for (int i = 0; i < m; ++i) {
		int a;
		cin >> a;
		s += a;
	}

	long long d = n - s;
	if (d < 0) {
		cout << -1;
	} else {
		cout << d;
	}
	
	return 0;
}
	