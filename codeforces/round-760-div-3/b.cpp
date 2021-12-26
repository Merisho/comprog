#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 0; tc < T; ++tc) {
        int n;
        cin >> n;

        vector<string> ss(n - 2);
        for (string& si : ss) {
            cin >> si;
        }

        string ans = "";
        ans += ss[0][0];
        for (int i = 1; i < n - 2; ++i) {
            if (ss[i - 1][1] != ss[i][0]) {
                ans += ss[i - 1][1];
            }

            ans += ss[i][0];
        }

        ans += ss[n - 3][1];

        if (ans.length() < n) {
            ans += ans[ans.length() - 1];
        }

        cout << ans << endl;
    }

    return 0;
}
