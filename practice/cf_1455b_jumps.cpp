// Problem URL: https://codeforces.com/problemset/problem/1455/B
#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

int s(int n) {
    return n * (n + 1) / 2;
}

void solve(int test_case) {
	int x;
    cin >> x;

    int n = 0;
    while (s(n) < x) {
        ++n;
    }

    if (s(n) - x != 1) {
        cout << n;
    } else {
        cout << (n + 1);
    }

    cout << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1455b_jumps_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
