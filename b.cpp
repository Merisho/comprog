#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll k;
	cin >> k;

	ll p = 1;
	ll c[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	int i = 0;
	while (p < k) {
		p /= c[i];
		++c[i];
		p *= c[i];
		++i;
		i %= 10;
	}

	string s = "codeforces";
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < c[i]; ++j) {
			cout << s[i];
		}
	}
	
	return 0;
}
	