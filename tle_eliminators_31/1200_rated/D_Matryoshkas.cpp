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
    // optimised way: store the ele need for the nums[i], ie store all the next ele needed,
    // and then use the last and current count, if curr cnt is bigger, means it can be a part of inc seq..
    int n;
    cin >> n;
    vi nums(n);
    input(nums);

    set<int> st;
    map<int, int> mpp; // counter
    for (auto it : nums)
    {
        mpp[it]++;
        st.insert(it);
        st.insert(it + 1);
    }

    int lastCnt = 0;
    int ans = 0;
    for (auto it : st)
    {
        int currCnt = mpp[it];
        int diff = currCnt - lastCnt;
        if (diff >= 0)
            ans += diff;
        lastCnt = currCnt;
    }
    cout << ans << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}