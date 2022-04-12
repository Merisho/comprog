#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int n;
        cin >> n;

        vector<pair<int, int> > a(n);
        int mx_a = 0;
        for (int i = 0; i < n; ++i) {
            int ai;
            cin >> ai;
            mx_a = max(mx_a, ai);

            a[i] = make_pair(ai, i);
        }

        vector<pair<int, int> > b(n);
        int mx_b = 0;
        for (int i = 0; i < n; ++i) {
            int bi;
            cin >> bi;
            mx_b = max(mx_b, bi);

            b[i] = make_pair(bi, i);
        }

        if (mx_b > mx_a) {
            swap(a, b);
        }

        sort(b.begin(), b.end());

        mx_a = 0;
        mx_b = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (b[i].first >= a[b[i].second].first) {
                int t = b[i].first;
                b[i].first = a[b[i].second].first;
                a[b[i].second].first = t;
            }

            mx_a = max(mx_a, a[b[i].second].first);
            mx_b = max(mx_b, b[i].first);
        }

        cout << (mx_a * mx_b) << endl;
    }

    return 0;
}
