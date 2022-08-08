#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n, h, m;
    cin >> n >> h >> m;

    int v = h * 60 + m;

    vector<int> alarms(n);
    for (int i = 0; i < n; ++i) {
        int hi, mi;
        cin >> hi >> mi;

        int t = hi * 60 + mi;
        if (t < v) {
            t += 24 * 60;
        }

        alarms[i] = t;
    }

    sort(alarms.begin(), alarms.end());

    int d = alarms[0] - v;
    cout << (d / 60) << " " << (d % 60) << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
