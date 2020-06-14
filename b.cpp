#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x, y;
	cin >> x >> y;

	bool ok = false;
	for (int t = 0; t <= x; ++t) {
		int c = x - t;
		if (t * 4 + c * 2 == y) {
			ok = true;
			break;
		}
	}

	cout << (ok ? "Yes" : "No");
	
	return 0;
}