#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int s = 0;
	int t = 240 - k;
	int i = 1;
	while (s + i * 5 <= t && i <= n) {
		s += i * 5;
		++i;
	}

	cout << i - 1;
	
	return 0;
}
	