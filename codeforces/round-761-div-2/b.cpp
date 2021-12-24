#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        for (int a = 2; a < 100; ++a) {
            int b = (n - a - 1);
            if (__gcd(a, b) == 1) {
                cout << a << " " << b << " " << 1 << endl;
                break;
            }
        }
    }

    return 0;
}
