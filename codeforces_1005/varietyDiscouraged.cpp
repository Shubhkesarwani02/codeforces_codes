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
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    map<int, int> mpp;
    for (auto num : nums)
    {
        mpp[num]++;
    }

    set<int> st;
    for (auto it : mpp)
    {
        if (it.second == 1)
            st.insert(it.first);
    }

    int lb = -1;
    int rb = -1;
    int maxlen = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        if (st.count(nums[r]) == 0)
        {
            l = r + 1;
        }
        else
        {
            int len = r - l + 1;
            if (len > maxlen)
            {
                maxlen = len;
                lb = l;
                rb = r;
            }
        }
    }
    if (maxlen == 0)
        cout << 0 << endl;
    else
        cout << lb + 1 << " " << rb + 1 << endl;
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