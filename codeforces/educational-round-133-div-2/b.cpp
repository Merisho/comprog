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

    cout << n << endl;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;

        if (i < n) {
            int t = a[i + 1];
            a[i + 1] = a[i];
            a[i] = t;
        }
    }
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
