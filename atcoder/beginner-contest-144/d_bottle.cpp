#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double a, b, x;
	cin >> a >> b >> x;

	double v = a * a * b;

	double start = 0;
	double end = 90;
	double e = 1e-6;
	double angl;
	while (abs(start - end) > e) {
		angl = (start + end) / 2;

		double vx;
		if (x <= v / 2) {
			double r = (angl * M_PI) / 180;
			double d = b / tan(r);
			vx = (a * b * d) / 2;
		}
		else {
			double r = ((90 - angl) * M_PI) / 180;
			double d = a / tan(r);
			vx = (2 * b - d) / 2 * a * a;
		}


		if (vx == x) {
			break;
		}

		if (vx > x) {
			start = angl;
		}
		else {
			end = angl;
		}
	}

	cout << setprecision(10) << angl;

	return 0;
}
