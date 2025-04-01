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
    int n, m;
    cin >> n >> m;
    vi height(n);
    vi len(m);
    input(height);
    input(len);

    // also we can find the first indx where he cant jump using binary search and add the len using prefix sum

    vector<pii> queries;
    for (int i = 0; i < m; i++)
    {
        queries.push_back({len[i], i});
    }

    sort(queries.begin(), queries.end());

    vi ans(m, 0);
    int j = 0;
    int prefixSum = 0;

    for (auto &q : queries)
    {
        while (j < n && height[j] <= q.first)
        {
            prefixSum += height[j];
            j++;
        }
        ans[q.second] = prefixSum;
    }

    output(ans);
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
