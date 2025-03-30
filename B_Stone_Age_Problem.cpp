#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> nums(n);
    for (int &x : nums) cin >> x;

    int sumA = accumulate(nums.begin(), nums.end(), 0LL);
    bool isGlobalSet = false;
    int globalValue = 0;

    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int i, x;
            cin >> i >> x;
            i--;

            if (isGlobalSet) {
                sumA = sumA - globalValue + x;
            } else {
                sumA = sumA - nums[i] + x;
            }

            nums[i] = x;
        } else {
            int x;
            cin >> x;
            sumA = n * x;
            isGlobalSet = true;
            globalValue = x;
        }
        cout << sumA << endl;
    }
}

signed main() {
    solve();
    return 0;
}
