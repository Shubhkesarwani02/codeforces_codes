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
    vi a(n);
    input(a);
    int cnt = 0;
    int prev = -1e18;
    for (int x : a)
        if (x - prev >= 2)
        {
            cnt++;
            prev = x;
        }
    cout << cnt << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
