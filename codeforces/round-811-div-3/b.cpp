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

    int ans = 0;
    vector<int> cnt(n + 1);
    for (int i = n - 1; i >= 0; --i) {
        ++cnt[a[i]];
        if (cnt[a[i]] == 2) {
            ans = i + 1;
            break;
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
