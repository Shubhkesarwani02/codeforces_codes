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

    vi temp(nums);
    sort(all(temp));

    vi rev_temp(temp);
    reverse(all(rev_temp));

    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[temp[i]] = rev_temp[i];
    }

    vi ans;
    for (auto it : nums)
    {
        ans.pb(mpp[it]);
    }
    output(ans);
    cout << endl;
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