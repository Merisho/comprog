#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <queue>
using ll = long long;
using namespace std;

int m;

vector< vector<bool> > vis;
vector< vector<ll> > a;

int f(ll t) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] > t) {
                return -1;
            }
            t++;
        }
    }

    return t;
}

void solve(int test_case) {
    cin >> m;

    a = vector< vector<ll> >(2, vector<ll>(m));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    ll l = 0;
    ll r = 1e9;
    while (l < r) {
        ll t = (l + r) / 2;
        ll tt = f(t);
        if (tt == -1) {
            l = t + 1;
        } else {
            r = tt;
        }
    }

    cout << r << endl;
}

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
