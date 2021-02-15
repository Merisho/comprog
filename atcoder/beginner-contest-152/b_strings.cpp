#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string sa;
	for (int i = 0; i < a; ++i) {
		sa += b + '0';
	}

	string sb;
	for (int i = 0; i < b; ++i) {
		sb += a + '0';
	}

	cout << min(sa, sb);
	
	return 0;
}
	