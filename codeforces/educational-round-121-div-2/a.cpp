#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		string s;
		cin >> s;

		sort(s.begin(), s.end());
		
		cout << s << endl;
	}
	
	return 0;
}
