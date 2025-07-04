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
    vi a(n);
    input(a);

    long long S = accumulate(all(a), 0LL);
    if (S < k)
    {
        cout << "NO\n";
        return;
    }
    if (S == k)
    {
        for (auto &x : a)
            if (x > 1)
            {
                cout << "NO\n";
                return;
            }
        cout << "YES\n";
        return;
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int x : a)
        if (x % 2 == 0)
            pq.push(x);

    int ops = n;
    while (ops < k && !pq.empty())
    {
        int u = pq.top();
        pq.pop();
        int h = u / 2;
        ops++;
        if (h % 2 == 0)
        {
            pq.push(h);
            pq.push(h);
        }
    }

    cout << (ops == k ? "YES\n" : "NO\n");
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
