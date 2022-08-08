#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int n;
        cin >> n;

        int k = 1;
        int m = 0;
        while ((1<<k) < n) {
            m = (1<<k);
            ++k;
        }

        for (int i = 1; i < m; ++i) {
            cout << i << " ";
        }

        if (m > 0) {
            cout << 0 << " ";
        }

        for (int i = m; i < n; ++i) {
            cout << i << " ";
        }

        cout << endl;
    }
}