#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long s = 0;
	for (int i = 1; i <= n; ++i) {
		if (i % 3 != 0 && i % 5 != 0) {
			s += i;
		}
	}

	cout << s;
	
	return 0;
}
	