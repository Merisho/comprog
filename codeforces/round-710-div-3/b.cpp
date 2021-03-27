#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;
		
		string s;
		cin >> s;

		int ans = 0;
		int start = -1;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '*') {
				++ans;
				start = i;
				break;
			}
		}

		int end = -1;
		for (int i = n - 1; i >= 0; --i) {
			if (s[i] == '*' && i != start) {
				++ans;
				end = i;
				break;
			}
		}

		for (int i = start; i + k < end;) {
			int j = i + k;
			while (s[j] != '*') {
				--j;
			}

			++ans;
			i = j;
		}

		cout << ans << endl;
	}
	
	return 0;
}
