#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, x;
	cin >> a >> b >> x;

	long double hx = x / (a * a);
	long double d = 2 * (b - hx);
	long double c = sqrt(a * a + d * d);
	long double s = a / c;

	cout << 90 - asin(s) * (180.0 / M_PI);
}
