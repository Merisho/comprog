#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 0; tc < T; ++tc) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int& ai : a) {
            cin >> ai;
        }

        sort(a.begin(), a.end());

        int l = n - 2 * k;
        int ans = 0;
        for (int i = 0; i < l; ++i) {
            ans += a[i];
        }

        for (int i = 0; i < k; ++i) {
            ans += a[l + i] / a[n - k + i];
        }

        cout << ans << endl;
    }

    return 0;
}
