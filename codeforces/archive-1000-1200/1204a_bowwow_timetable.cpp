#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	bool g = false;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == '1') {
			g = true;
			break;
		}
	}

	int a = s.length() - 1;
	int ans = a / 2;
	if (a % 2 == 1 || g) {
		++ans;
	}

	cout << ans;
	
	return 0;
}
	