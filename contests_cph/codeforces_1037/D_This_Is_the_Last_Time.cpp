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
    vector<array<int, 3>> c(n);
    rep(i, 0, n - 1)
            cin >>c[i][0] >> c[i][1] >> c[i][2];

    sort(all(c), [](auto &a, auto &b)
         { return a[0] < b[0]; });

    priority_queue<int> pq;
    int curr = k, idx = 0;

    while (1)
    {
        while (idx < n && c[idx][0] <= curr)
        {
            pq.push(c[idx][2]); 
            idx++;
        }
        if (pq.empty())
            break;
        int topv = pq.top();
        pq.pop();
        if (topv > curr)
            curr = topv;
        else
            break;
    }
    cout << curr << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
