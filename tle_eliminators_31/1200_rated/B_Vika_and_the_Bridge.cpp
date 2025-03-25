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
    vi c(n);
    input(c);
    vi last(k, -1), max_step(k, 0), max2_step(k, 0);
    rep(i, 0, n - 1)
    {
        int step = i - last[c[i] - 1];
        if (step > max_step[c[i] - 1])
        {
            max2_step[c[i] - 1] = max_step[c[i] - 1];
            max_step[c[i] - 1] = step;
        }
        else if (step > max2_step[c[i] - 1])
        {
            max2_step[c[i] - 1] = step;
        }
        last[c[i] - 1] = i;
    }
    rep(i, 0, k - 1)
    {
        int step = n - last[i];
        if (step > max_step[i])
        {
            max2_step[i] = max_step[i];
            max_step[i] = step;
        }
        else if (step > max2_step[i])
        {
            max2_step[i] = step;
        }
    }
    int ans = 1e9;
    rep(i, 0, k - 1)
    {
        ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
    }
    cout << ans - 1 << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
