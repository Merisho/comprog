#include <iostream>
using ll = long long;
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        ll a, s;
        cin >> a >> s;

        bool ok = true;
        string b = "";
        while (a > 0 || s > 0) {
            ll ai = a % 10;
            ll bi = s % 10;

            a /= 10;

            if (bi < ai) {
                bi = s % 100;
                s /= 100;
            } else {
                s /= 10;
            }

            if (bi > 19 || bi < ai) {
                ok = false;
                break;
            }

            bi -= ai;

            b = to_string(bi) + b;
        }

        int i = 0;
        while (b[i] == '0') ++i;

        string ans = "";
        while (i < b.length()) {
            ans += b[i];
            ++i;
        }

        cout << (ok ? ans : "-1") << endl;
    }

    return 0;
}
