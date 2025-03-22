#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool found = false;
        for (int x = 0; x < (1 << 8); ++x) {
            int total_xor = 0;
            for (int num : a) {
                total_xor ^= (num ^ x);
            }
            if (total_xor == 0) {
                cout << x << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}