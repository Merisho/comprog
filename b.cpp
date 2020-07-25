#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
        cin >> n;

        vector<bool> m(n + 1, false);
        for (int i = 0; i < 2 * n; ++i) {
            int a;
            cin >> a;

            if (m[a]) {
                continue;
            }

            cout << a << " ";
            m[a] = true;
        }

		cout << endl;
	}
	
	return 0;
}
