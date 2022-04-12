#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

void solve(int test_case) {
    ll n, s;
    cin >> n >> s;

    if (s > n * n - 1LL) {
        cout << (s / (n * n));
    } else {
        cout << 0;
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
