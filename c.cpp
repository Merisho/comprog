#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;

	if (r1 == r2 && c1 == c2) {
		cout << 0;
	} else if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 || abs(r1 - r2) + abs(c1 - c2) <= 3) {
		cout << 1;
	} else if ((r1 + c1) % 2 == (r2 + c2) % 2 || abs((r1 + c1) - (r2 + c2)) <= 3 || abs((r1 - c1) - (r2 - c2)) <= 3) {
		cout << 2;
	} else {
		cout << 3;
	}
	
	return 0;
}
