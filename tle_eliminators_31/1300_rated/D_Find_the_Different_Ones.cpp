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

    vi nums(n), temp(n, -1);
    input(nums);

    rep(i, 1, n - 1)
    {
        temp[i] = temp[i - 1];
        if (nums[i] != nums[i - 1])
        {
            temp[i] = i - 1;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (temp[r] < l)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << (temp[r] + 1) << " " << (r + 1) << endl;
        }
    }
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
