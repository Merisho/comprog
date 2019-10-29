#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a, b, x;
	cin >> a >> b >> x;

	double hx = x / (a * a);

	double t;
	if (hx >= b / 2) {
		double d = 2 * (b - hx);
		t = a / d;
	}
	else {
		double d = a + hx - b / 2;
		t = b / d;
	}

	cout << setprecision(10) << 90 - atan(t) * (180.0 / M_PI);

	return 0;
}
