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
    int n, s;
    cin >> n >> s;
    int cnt = 0;
    rep(i, 1, n) {
        int dx, dy, x, y;
        cin >> dx >> dy >> x >> y;
        int a = (dx == 1 ? s - x : x);
        int b = (dy == 1 ? s - y : y);
        if (a == b) cnt++;
    }
    cout << cnt << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
