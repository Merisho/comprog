#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int l = s.length();
	int h = l / 2;
	string s1 = s.substr(0, h);
	string s2 = s.substr(h, h + l % 2);

	int p = 0;
	for (int i = 0; i < h; ++i) {
		if (s1[i] != s2[s2.length() - 1 - i]) {
			++p;
		}
	}

	cout << p;
	
	return 0;
}
	