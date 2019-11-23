#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD = 1e9 + 7;

long long k = -1;

void ways(int x, int y) {
	if (x - 1 < 0 || y - 1 < 0 || x - 2 < 0 || y - 2 < 0) {
		return;
	}

	++k;

	ways(x - 2, y - 1);
	ways(x - 1, y - 2);
}

int main() {
	int x, y;
	cin >> x >> y;
	
	ways(x, y);

	cout << k % MOD;

	return 0;
}
	