#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<string> s(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> s[i];
	}

	ll f = 1;
	ll t = 1;
	for (int i = 1; i <= n; ++i) {
		if (s[i] == "OR") {
			t = 2 * t + f;
		} else {
			f = 2 * f + t;
		}
	}

	cout << t;
	
	return 0;
}
