#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void solve(int test_case) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& ai : a) {
        cin >> ai;
    }

    int p = 1;
    int ans = 0;
    while (n - p - 1 >= 0) {
        if (a[n - p - 1] == a[n - 1]) {
            ++p;
            continue;
        }

        ++ans;
        p *= 2;
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
