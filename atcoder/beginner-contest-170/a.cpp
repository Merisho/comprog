#include <bits/stdc++.h>
using namespace std;

int main() {
	int ans = 0;
	for (int i = 0; i < 5; ++i) {
		int x;
		cin >> x;
		if (x == 0) {
			ans = i + 1;
		}
	}

	cout << ans;
	
	return 0;
}
	