#include <iostream>
using namespace std;

int main() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;

	a -= x;
	if (a > 0) {
		z -= a;
	}
	else {
		c += a;
	}
	x = 0;

	b -= y;
	if (b > 0) {
		z -= b;
	}
	else {
		c += b;
	}
	y = 0;

	if (a >= x && b >= y && c >= z) {
		cout << "It is a kind of magic";
	}
	else {
		cout << "There are no miracles in life";
	}

	return 0;
}
