#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
using ll = long long;
using namespace std;

void solve(int test_case) {
    int n;
    cin >> n;

    --n;
    int y = 0;
    while (y * y < n) {
        ++y;
    }

    set<int> s;
    for (int i = 0; i <= n; ++i) {
        s.insert(i);
    }

    vector<int> p;
    while (n >= 0 && y >= 0) {
        int m = y * y - n;
        if (s.count(m)) {
            p.push_back(m);
            s.erase(m);
            --n;
        } else {
            --y;
        }
    }

    if (n >= 0) {
        cout << -1 << endl;
        return;
    }

    for (int i = p.size() - 1; i >= 0; --i) {
        cout << p[i] << " ";
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
