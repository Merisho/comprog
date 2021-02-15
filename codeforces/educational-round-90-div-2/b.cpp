#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int o = 0;
		int z = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '1') {
				++o;
			} else {
				++z;
			}
		}

		if (min(o, z) % 2 == 1) {
			cout << "DA";
		} else {
			cout << "NET";
		}

		cout << endl;
	}
	
	return 0;
}
	