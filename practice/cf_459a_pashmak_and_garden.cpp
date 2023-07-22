// Problem URL: https://codeforces.com/problemset/problem/459/A
#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);

	if ((dx == 0 && dy == 0) || dx != 0 && dy != 0 && dx != dy) {
		cout << -1 << endl;
		return;
	}

	int x3, y3, x4, y4;
	if (dx != 0 && dy != 0) {
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	} else if (dx == 0) {
		x3 = x1 + dy;
		y3 = y1;
		x4 = x3;
		y4 = y2;
	} else {
		x3 = x1;
		y3 = y1 + dx;
		x4 = x2;
		y4 = y3;
	}

	cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_459a_pashmak_and_garden_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
