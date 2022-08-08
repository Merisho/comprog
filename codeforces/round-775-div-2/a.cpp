#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& ai : a) {
        cin >> ai;
    }

    int l = 0;
    while (l < n && a[l] == 1) {
        ++l;
    }
    --l;

    int r = n - 1;
    while (r > l && a[r] == 1) {
        --r;
    }

    int ans;
    if (r == l) {
        ans = 0;
    } else {
        ans = r + 1 - l;
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
