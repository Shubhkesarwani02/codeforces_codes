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
    int n, x;
    cin >> n >> x;

    vi nums(n);
    input(nums);

    vi temp;
    temp.pb(0);
    for (auto num : nums)
        temp.pb(num);
    temp.pb(x);

    int maxCnt = 0;
    int cnt = 0;
    for (int i = 1; i < temp.size(); i++)
    {
        if (i == temp.size() - 1)
            cnt = 2 * (temp[i] - temp[i - 1]);
        else
            cnt = temp[i] - temp[i - 1];
        maxCnt = max(cnt, maxCnt);
    }
    cout << maxCnt << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}