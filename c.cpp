#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	int n = s.length();

	bool ok = true;
	for (int i = 0; i < s.length() / 2; ++i) {
		if (s[i] != s[n - i - 1]) {
			ok = false;
			break;
		}
	}

	if (ok) {
		cout << 0 << endl;
		return 0;
	}

	cout << 3 << endl;
	cout << "R " << (n - 1) << endl;
	cout << "L " << n << endl;
	cout << "L " << 2 << endl;
	
	return 0;
}
