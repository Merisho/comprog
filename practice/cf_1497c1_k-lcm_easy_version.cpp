// Problem URL: https://codeforces.com/problemset/problem/1497/C1
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	int n, k;
    cin >> n >> k;

    if (n % 2 == 1) {
        int m = (n - 1) / 2;
        cout << 1 << " " << m << " " << m;
    } else if ((n / 2) % 2 == 1) {
        int m = (n - 2) / 2;
        cout << 2 << " " << m << " " << m;
    } else {
        int m = n / 2;
        cout << m << " " << (m / 2) << " " << (m / 2);
    }

    cout << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1497c1_k-lcm_easy_version_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
