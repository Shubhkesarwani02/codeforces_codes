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
    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    vi a(n);
    input(a);

    int S = 0, M = 0;
    rep(i, 0, n - 1)
    {
        S += a[i];
        M = max(M, a[i]);
    }

    int dx = qx - px, dy = qy - py;
    int d2 = dx * dx + dy * dy;
    int Lmin = max<int>(0, M - (S - M));

    if (Lmin * Lmin <= d2 && d2 <= S * S)
        cout << "Yes\n";
    else
        cout << "No\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}
