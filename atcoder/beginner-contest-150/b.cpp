#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string s;
	cin >> s;

	int k = 0;
	for (int i = 0; i < n - 2; ++i) {
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
			++k;
		}
	}

	cout << k;
	
	return 0;
}
	