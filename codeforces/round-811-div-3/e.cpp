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
    bool eq = true;
    bool f = false;
    bool z = false;
    int p = -1;
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;

        if (p != -1) {
            eq = eq && ai == p;
        }
        p = ai;

        int r = ai % 10;
        f = f || r == 5;
        z = z || r == 0;
        a[i] = ai;
        if ((r % 2) == 1) {
            a[i] += r;
        }
    }

    if (eq) {
        cout << "YES" << endl;
        return;
    }

    if (f || z) {
        cout << "NO" << endl;
        return;
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
