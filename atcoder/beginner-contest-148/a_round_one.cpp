#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int n = min(a, b);
	int m = max(a, b);

	if (n == 1 && m == 2) {
		cout << 3;
	} else if (n == 2 && m == 3) {
		cout << 1;
	} else if (n == 1 && m == 3) {
		cout << 2;
	}
	
	return 0;
}
	