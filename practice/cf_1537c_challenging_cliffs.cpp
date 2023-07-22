// Problem URL: https://codeforces.com/problemset/problem/1538/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int min_i = -1;
    int min_j = -1;
    int diff = 1e9 + 1;
    for (int i = 0; i < n - 1; ++i) {
        int d = abs(h[i] - h[i + 1]);
        if (d < diff) {
            diff = d;
            min_i = i;
            min_j = i + 1;
        }
    }

    cout << h[min_i] << " ";

    for (int i = min_j + 1; i < n; ++i) {
        cout << h[i] << " ";
    }

    for (int i = 0; i < min_i; ++i) {
        cout << h[i] << " ";
    }

    cout << h[min_j] << " " << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1537c_challenging_cliffs_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
