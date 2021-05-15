#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		int o = s.length() + 1;
		for (int i = 0; i < s.length() - 1; ++i) {
			if (s[i] == '1' && s[i + 1] == '1') {
				o = i;
				break;
			}
		}

		int z = -1;
		for (int i = 0; i < s.length() - 1; ++i) {
			if (s[i] == '0' && s[i + 1] == '0') {
				z = i;
			}
		}

		if (o < z) {
			cout << "NO";
		} else {
			cout << "YES";
		}

		cout << endl;
	}
	
	return 0;
}
