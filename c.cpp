#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int MOD = 1e9 + 7;

int main() {
	int n, x, pos;

	cin >> n >> x >> pos;

	int gt = n - x;
	int lt = x - 1;

	int l = 0;
	int r = n;
	int gtc = 0;
	int ltc = 0;
	while (l < r) {
		int m = (r + l) / 2;
		if (m < pos) {
			++ltc;
			l = m + 1;
		} else if (m > pos) {
			++gtc;
			r = m;
		} else {
			break;
		}
	}

	if (gtc > gt || ltc > lt) {
		cout << 0;
		return 0;
	}

	
	
	return 0;
}
