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
    int n, k;
    cin >> n >> k;
    vi nums(n);
    input(nums);

    int cnt = 0;
    int bag = 0;
    rep(i, 0, n - 1)
    {
        if (nums[i] == 0)
            bag++;
        else
            bag = 0;

        if (bag == k)
        {
            cnt++;
            i++;
            bag = 0;
        }
    }
    cout << cnt << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
