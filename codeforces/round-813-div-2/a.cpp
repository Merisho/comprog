#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <queue>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int pi;
        cin >> pi;

        if (i + 1 <= k && pi > k) {
            ++ans;
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
