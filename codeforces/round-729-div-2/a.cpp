#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		 int n;
		 cin >> n;

		 int o = 0;
		 int e = 0;
		 for (int i = 0; i < 2 * n; ++i) {
			 int a;
			 cin >> a;

			 if (a % 2 == 0) {
				 ++e;
			 } else {
				 ++o;
			 }
		 }

		 cout << (o == e ? "Yes" : "No") << endl;
	}
	
	return 0;
}
