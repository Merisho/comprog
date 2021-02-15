#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	double s = 0;
	for (int i = n; i > 0; --i) {
		double a = 1 / double(i);
		s += a;
	}

	cout << setprecision(6) << s;
	
	return 0;
}
	