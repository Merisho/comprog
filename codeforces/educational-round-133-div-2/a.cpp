#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <queue>
using ll = long long;
using namespace std;

void solve(int test_case) {
    ll n;
    cin >> n;

    if (n == 1) {
        cout << 2 << endl;
        return;
    }

    cout << (n + 2) / 3 << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
