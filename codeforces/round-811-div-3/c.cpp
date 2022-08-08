#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

int ln(int n) {
    int l = 0;
    while (n > 0) {
        ++l;
        n /= 10;
    }

    return l;
}

int u = 1<<10;
int find(int s) {
    int ans = 1e9;
    for (int i = 1; i <= 9; ++i) {
        if (u&(1<<i)) {
            continue;
        }

        if (s - i <= 0) {
            return i;
        }

        u ^= (1<<i);
        int m = find(s - i);
        u ^= (1<<i);
        if (m != -1) {
            ans = min(ans, i * int(pow(10, ln(m))) + m);
        }
    }

    return ans == 1e9 ? -1 : ans;
}

vector<int> m(46, 0);
void solve(int test_case) {
    int s;
    cin >> s;

    int ans;
    if (m[s] > 0) {
        ans = m[s];
    } else {
        m[s] = ans = find(s);
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
