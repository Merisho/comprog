#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;
 
		int a, b;
		cin >> a >> b;
 
		for (int i = 0; i < n - 3; ++i) {
			int a;
			cin >> a;
		}
 
		int mx;
		cin >> mx;
 
		if ((a + b) <= mx) {
			cout << 1 << " " << 2 << " " << n;
		} else {
			cout << -1;
		}
 
		cout << endl;
	}
	
	return 0;
}
