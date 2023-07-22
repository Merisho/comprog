// Problem URL: https://codeforces.com/problemset/problem/1352/B
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	int n, k;
    cin >> n >> k;

    if (k > n || (n % 2 == 1 && k % 2 == 0)) {
        cout << "NO" << endl;
        return;
    }


    if (n % 2 == 1 || k % 2 == 0) {
        cout << "YES" << endl;

        for (int i = 0; i < k - 1; ++i) {
            cout << 1 << " ";
        }
        
        cout << (n - k + 1) << endl;
        return;
    }

    if ((k - 1) * 2 >= n) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 0; i < k - 1; ++i) {
        cout << 2 << " ";
        n -= 2;
    }

    cout << n << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1352b_same_parity_summands_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
