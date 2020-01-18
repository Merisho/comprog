#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	char m = 'a';
	for (char c : s) {
		m = max(m, c);
	}

	for (char c : s) {
		if (c == m) {
			cout << c;
		}
	}
	
	return 0;
}
	