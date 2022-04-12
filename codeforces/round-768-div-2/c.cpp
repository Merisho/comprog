#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void print_pair(int a, int b) {
    cout << a << " " << b << endl;
}

void solve(int test_case) {
    int n, k;
    cin >> n >> k;

    if (k == n - 1 && n == 4) {
        cout << -1 << endl;
        return;
    }

    if (k == 0) {
        for (int i = 0; i < n / 2; ++i) {
            cout << i << " " << (i ^ (n - 1)) << endl;
        }
        return;
    }

    if (k > 0 && k < n - 1) {
        int c = (k ^ (n - 1));
        cout << 0 << " " << (k ^ (n - 1)) << endl;
        cout << k << " " << (n - 1) << endl;

        for (int i = 1; i < n / 2; ++i) {
            if (i == c || i == k) {
                continue;
            }

            cout << i << " " << (i ^ (n - 1)) << endl;
        }

        return;
    }

    // k == n - 1
    print_pair(n - 2, n - 1);
    print_pair(1, n - 3);
    print_pair(0, 2);

    for (int i = 3; i < n / 2; ++i) {
        int c = i ^ (n - 1);
        if (c == n - 2 || c == n - 1 || c == n - 3) {
            continue;
        }

        print_pair(i, c);
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
