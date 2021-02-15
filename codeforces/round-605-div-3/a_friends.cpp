#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; ++i) {
		int a, b, c;
		cin >> a >> b >> c;

		int s = abs(a - b) + abs(a - c) + abs(b - c);
		cout << (s > 4 ? s - 4 : 0) << endl;
	}
	
	return 0;
}
	