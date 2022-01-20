#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int bx, by;
		cin >> bx >> by;

		int d = bx + by;
		int xc = -1;
		int yc = -1;
		for (int x = 0; x <= 50; ++x) {
			for (int y = 0; y <= 50; ++y) {
				if (2 * (x + y) == d && 2 * (abs(x - bx) + abs(y - by)) == d) {
					xc = x;
					yc = y;
					break;
				}
			}
		}

		cout << xc << " " << yc << endl;
	}
	
	return 0;
}
