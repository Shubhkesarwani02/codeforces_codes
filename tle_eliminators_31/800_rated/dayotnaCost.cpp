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
#define sum(a) a.begin(), a.end(), 0

using namespace std;

void helper()
{
    int n, k;
    cin >> n >> k;
    vi nums(n);
    input(nums);

    bool found = false;
    for (auto num : nums)
    {
        if (num == k)
        {
            found = true;
            break;
        }
    }
    if (!found)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return;
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