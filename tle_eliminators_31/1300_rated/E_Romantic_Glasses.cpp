#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    map<int, int> mpp;
    mpp[0] = -1;
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even += nums[i];
        else
            odd += nums[i];

        int bal = odd - even;
        //If a balance repeats, the subarray between those two indices has equal total for both.
        if (mpp.find(bal) != mpp.end())
        {
            cout << "YES" << endl;
            return;
        }
        mpp[bal] = i;
    }
    cout << "NO" << endl;
    return;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
