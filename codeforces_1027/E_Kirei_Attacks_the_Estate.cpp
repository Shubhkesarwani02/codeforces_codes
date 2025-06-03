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
    vi a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<vi> adj(n + 1);
    for (int i = 0, u, v; i < n - 1; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vi res(n + 1);
    struct Item
    {
        int u, p, d;
        int Su, minS, maxS;
    };
    vector<Item> st;
    st.reserve(n);
    st.push_back({1, 0, 0, a[1], 0, 0});
    while (!st.empty())
    {
        auto it = st.back();
        st.pop_back();
        int u = it.u, p = it.p, d = it.d;
        int Su = it.Su, minS = it.minS, maxS = it.maxS;
        if (d % 2 == 0)
            res[u] = Su - minS;
        else
            res[u] = maxS - Su;
        int mn = min(minS, Su), mx = max(maxS, Su);
        for (int v : adj[u])
            if (v != p)
            {
                int Sv = Su + a[v] * ((d % 2 == 0) ? -1 : 1);
                st.push_back({v, u, d + 1, Sv, mn, mx});
            }
    }
    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
