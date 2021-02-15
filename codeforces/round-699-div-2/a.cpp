#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int px, py;
		cin >> px >> py;

		string s;
		cin >> s;

		int u = 0, d = 0, l = 0, r = 0;
		bool ok = false;
		for (int i = 0; i < s.length(); ++i) {
			switch (s[i]) {
				case 'U':
					++u;
					break;
				case 'D':
					++d;
					break;
				case 'L':
					++l;
					break;
				case 'R':
					++r;
					break;
			}
		}

		if (-l <= px && px <= r && -d <= py && py <= u) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
