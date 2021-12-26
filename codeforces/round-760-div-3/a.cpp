#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 0; tc < T; ++tc) {
        int b[7];
        for (int i = 0; i < 7; ++i) {
            cin >> b[i];
        }

        cout << b[0] << " " << b[1] << " " << (b[6] - b[0] - b[1]) << endl;
    }

    return 0;
}
