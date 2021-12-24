#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        string s;
        cin >> s;

        string t;
        cin >> t;

        sort(s.begin(), s.end());

        vector<int> c(26, 0);
        for (auto x : s) {
            ++c[x - 'a'];
        }

        if (t != "abc" || c[0] == 0 || c[1] == 0 || c[2] == 0) {
            cout << s << endl;
            continue;
        }

        while (c[0] > 0) {
            cout << 'a';
            --c[0];
        }

        while (c[2] > 0) {
            cout << 'c';
            --c[2];
        }

        while (c[1] > 0) {
            cout << 'b';
            --c[1];
        }

        for (int i = 3; i < 26; ++i) {
            while (c[i] > 0) {
                cout << char(i + 'a');
                --c[i];
            }
        }

        cout << endl;
    }

    return 0;
}
