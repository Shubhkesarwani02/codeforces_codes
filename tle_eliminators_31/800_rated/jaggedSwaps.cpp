#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define input(v) for (auto &i : v) cin >> i
#define output(v) for (auto &i : v) cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()

void helper() {
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    bool swapped;
    do {
        swapped = false;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        helper();
    }
}