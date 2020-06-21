#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	string ans;
	while (n >= 1) {
		char c;
		int r = (n % 26);
		if (r == 0) {
			c = 'z';
			n -= 1LL;
		} else {
			c = r + 'a' - 1;
		}
		ans = c + ans;
		n /= 26LL;
	}

	cout << ans;
	
	return 0;
}
	