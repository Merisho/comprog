#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((c + b - 1) / b <= (a + d - 1) / d) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	
	return 0;
}
	