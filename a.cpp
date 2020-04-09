#include <bits/stdc++.h>
using namespace std;

double x[10];
double y[10];

double find() {
	double e = 1e-4;
	double dx = x[0], dy = y[0];
	while (mx(dx, dy) - mn(dx, dy) > e) {
		double 
	}

	return mx(dx, dy);
}

int main() {
	double ax, ay;
	cin >> ax >> ay;

	double dx, dy;
	cin >> dx >> dy;

	dx = (dx + ax) / 2;
	dy = (dy + ay) / 2;

	for (int i = 0; i < 8; ++i) {
		double x, y;
		cin >> x >> y;

		dx = (dx + x) / 2;
		dy = (dy + y) / 2;
	}

	cout << sqrt((dx - ax) * (dx - ax) + (dy - ay) * (dy - ay));

	return 0;
}
	