#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define input(v)      \
    for (auto &i : v) \
    cin >> i
#define output(v)     \
    for (auto &i : v) \
    cout << i << " "
#define pb push_back
#define all(a) a.begin(), a.end()
#define sum(a) accumulate(a.begin(), a.end(), 0LL)

using namespace std;

void helper()
{
    int n, k;
    cin >> n >> k;
    vi nums(n);
    input(nums);

    int even = 0;
    bool div3 = false, div4 = false, div5 = false;

    int min_rem3 = LLONG_MAX, min_rem4 = LLONG_MAX, min_rem5 = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        if (x % 2 == 0) even++;

        if (x % 3 == 0) div3 = true;
        if (x % 4 == 0) div4 = true;
        if (x % 5 == 0) div5 = true;

        min_rem3 = min(min_rem3, (3 - x % 3) % 3);
        min_rem4 = min(min_rem4, (4 - x % 4) % 4);
        min_rem5 = min(min_rem5, (5 - x % 5) % 5);
    }

    if (k == 2)
    {
        cout << (even > 0 ? 0 : 1) << endl;
        return;
    }
    if (k == 3)
    {
        cout << (div3 ? 0 : min_rem3) << endl;
        return;
    }
    if (k == 5)
    {
        cout << (div5 ? 0 : min_rem5) << endl;
        return;
    }
    if (k == 4)
    {
        if (div4 || even >= 2)
        {
            cout << 0 << endl;
            return;
        }
        int cnt1 = min_rem4;
        int cnt2 = (even == 1 ? 1 : 2);
        cout << min(cnt1, cnt2) << endl;
        return;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}
