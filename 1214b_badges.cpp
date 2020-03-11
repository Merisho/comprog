#include <bits/stdc++.h>
using namespace std;

int main() {
	int b, g, n;
	cin >> b >> g >> n;

	int blue = min(b, n);
	int red = n - blue;
	int k = 1;

	while (red < g && blue > 0) {
		--blue;
		++red;
		++k;
	}

	cout << k;
	
	return 0;
}
	