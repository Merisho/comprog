#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, s, d;
	cin >> n >> s >> d;

	bool ok = false;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;

		if (x < s && y > d) {
			ok = true;
		}
	}

	if (ok) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	
	return 0;
}
