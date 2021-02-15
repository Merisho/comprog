#include <bits/stdc++.h>
using namespace std;

int main() {
	int xh, yh;
	int xg, yg;
	cin >> xh >> yh >> xg >> yg;

	cout << abs(xg - xh) + abs(yg - yh);
	
	return 0;
}
	