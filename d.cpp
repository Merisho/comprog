#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
	int T;
	cin >> T;
 
	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;
		string s;
		cin >> s;
 
		int j = 0;
		while (j < n && s[j] == s[n - 1]) {
			++j;
		}
		rotate(s.begin(), s.begin() + j, s.begin() + n);
 
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			int j = i + 1;
			while (s[j % n] == s[i]) {
				++j;
				if (j > n && j % n == 2) {
					break;
				}
			}
			ans += (j - i) / 3;
			i = j - 1;
		}
 
		cout << ans << endl;
	}
	
	return 0;
}