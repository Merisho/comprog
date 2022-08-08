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

    int x = 0;
    int y = 0;
    int xl = 0;
    int xr = 0;
    int yl = 0;
    int yr = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int xi, yi;
        cin >> xi >> yi;

        if (yi == 0) {
            if (xi < 0) {
                xl = max(xl, -xi);
            } else {
                xr = max(xr, xi);
            }
        }

        if (xi == 0) {
            if (yi < 0) {
                yl = max(yl, -yi);
            } else {
                yr = max(yr, yi);
            }
        }
    }

    ans = 2 * (xl + xr + yl + yr);

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
