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
#define sum(a) accumulate(a.begin(), a.end(), 0)

using namespace std;

void dfs(int node, int parent, vector<vi> &tree, vi &dist)
{
    for (int neighbor : tree[node])
    {
        if (neighbor != parent)
        {
            dist[neighbor] = dist[node] + 1;
            dfs(neighbor, node, tree, dist);
        }
    }
}

void helper()
{
    int n, st, en;
    cin >> n >> st >> en;
    vector<vi> tree(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    vi dist(n + 1, -1);
    dist[en] = 0;
    dfs(en, -1, tree, dist);

    vi perm(n);
    iota(all(perm), 1);
    sort(all(perm), [&](int a, int b)
         { return dist[a] > dist[b]; });

    if (dist[st] == -1)
        cout << "-1\n";
    else
    {
        output(perm);
        cout << "\n";
    }
}

signed main()
{
    // mouse will follow the path wherver we put the cheese!!
    //start with the farthest distance from the end, go towards the closest, ie print the dist in desc order
    int t;
    cin >> t;
    while (t--)
    {
        helper();
    }
}
