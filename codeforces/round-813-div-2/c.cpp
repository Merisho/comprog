#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <queue>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> idx(n + 1, -1);
    int l = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        idx[a[i]] = i;

        if (i > 0 && a[i] < a[i - 1]) {
            l = i - 1;
        }
    }

    int mxi = -1;
    for (int i = 0; i <= l; ++i) {
        mxi = max(mxi, idx[a[i]]);
    }

    int ans = 0;
    for (int i = 0; i <= mxi; ++i) {
        if (idx[a[i]] > -1) {
            ++ans;
            idx[a[i]] = -1;
        }
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
