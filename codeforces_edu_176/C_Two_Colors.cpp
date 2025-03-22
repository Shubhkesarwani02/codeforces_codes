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
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

void helper()
{
    int n, m;
    cin >> n >> m;
    vi freq(n + 1, 0);
    rep(i, 0, m - 1)
    {
        int cap;
        cin >> cap;
        if (cap >= 1 && cap <= n)
            freq[cap]++;
    }
    int ans = 0;
    rep(x, 1, n)
    {
        rep(y, 1, n)
        {
            int lowcut = max((int)1, n - y);
            int highcut = min(x, n - 1);
            int fxy = 0;
            if (highcut >= lowcut)
                fxy = highcut - lowcut + 1;
            if (x == y)
                ans += freq[x] * (freq[x] - 1) * fxy;
            else
                ans += freq[x] * freq[y] * fxy;
        }
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
