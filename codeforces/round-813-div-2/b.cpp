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

    if (n % 2 == 1) {
        cout << 1 << " ";
        for (int i = 2; i <= n; i += 2) {
            cout << (i + 1) << " " << i << " ";
        }
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " " << (i - 1) << " ";
        }
    }

    cout << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
