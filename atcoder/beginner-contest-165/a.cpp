#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, k;
	cin >> k >> a >> b;

	bool ans = false;
	while (a <= b) {
		if (a % k == 0) {
			ans = true;
			break;
		}
		++a;
	}

	if (ans) {
		cout << "OK";
	} else {
		cout << "NG";
	}
	
	return 0;
}
	