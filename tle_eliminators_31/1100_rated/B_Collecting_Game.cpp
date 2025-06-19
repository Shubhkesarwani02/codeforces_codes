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
    vector<pii> arr(n + 1);
    rep(i, 1, n) cin >> arr[i].first, arr[i].second = i;

    sort(arr.begin() + 1, arr.end());

    vi nxt(n + 1), sum(n + 1), ans(n + 1);
    nxt[0] = sum[0] = 0;

    rep(i, 1, n)
    {
        if (nxt[i - 1] >= i)
        {
            nxt[i] = nxt[i - 1];
            sum[i] = sum[i - 1];
        }
        else
        {
            sum[i] = sum[i - 1] + arr[i].first;
            nxt[i] = i;
            while (nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].first)
            {
                nxt[i]++;
                sum[i] += arr[nxt[i]].first;
            }
        }
        ans[arr[i].second] = nxt[i];
    }

    rep(i, 1, n) cout << ans[i] - 1 << " ";
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
