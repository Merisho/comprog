#include <bits/stdc++.h>
using namespace std;

int main() {
	string hx;
	cin >> hx;

	int n;
	n = 10 * pow(16, 6);
	
	for (int i = 6; i > 0; --i) {
		n += (hx[i] - '0') * pow(16, 6 - i);
	}
	
	cout << (n % 2);

	return 0;
}
	