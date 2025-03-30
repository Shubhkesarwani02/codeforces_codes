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
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

pair<pair<int, int>, int> solve(vector<long long> &a, int i)
{
    int n = a.size();

    long long lower_bound = (i > 0) ? a[i - 1] : LLONG_MIN;
    long long upper_bound = (i < n - 1) ? a[i + 1] : LLONG_MAX;

    int y = -1e9, z = -1e9;

    for (int j = i + 1; j < n - 1; ++j)
    {
        if (a[j] > lower_bound)
        {
            y = j;
            break;
        }
    }

    int newval = -1e9;
    if (y != -1e9)
    {
        for (int k = y + 1; k < n; ++k)
        {
            long long new_value = a[y] - a[k];
            if (new_value > lower_bound && new_value < upper_bound)
            {
                newval = new_value;
                z = k;
                break;
            }
        }
    }
    return {{y, z}, newval};
}

void helper()
{
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    vector<pair<int, pair<int, int>>> ans;

    int x, y, z;

    int left = -1e9, right = -1e9;
    for (int i = 0; i < n - 1; i++)
    {
        right = nums[i + 1];
        if (nums[i] > left && nums[i] < right)
        {
            left = nums[i];
            continue;
        }
        else
        {
            pair<pair<int, int>, int> req = solve(nums, i);
            x = i;
            y = req.first.first;
            z = req.first.second;
            if (y == -1e9 || z == -1e9)
            {
                cout << -1 << endl;
                return;
            }
            left = req.second;
        }
        ans.pb({x, {y, z}});
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.first + 1 << " " << it.second.first + 1 << " " << it.second.second + 1 << endl;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
