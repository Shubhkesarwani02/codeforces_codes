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

    // k can be 2, there is mixed of even and odds
    // else there is all even or all odd, mod with power of 2^i gives the i digits as ans in their binary rep...

    int k = 2;
    while (1)
    {
        set<int> st;
        rep(i, 0, n - 1)
        {
            st.insert(nums[i] % k);
        }
        if (st.size() == 2)
        {
            cout << k << endl;
            return;
        }
        else
            k *= 2;
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
